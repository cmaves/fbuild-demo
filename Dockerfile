

FROM debian:bookworm

RUN apt-get -y update && apt-get -y upgrade && \
    apt-get -y install vim nodejs gcc mingw-w64 curl git zip man


RUN curl -o fastbuild.zip 'https://fastbuild.org/downloads/v1.12/FASTBuild-Linux-x64-v1.12.zip' && \
    unzip fastbuild.zip fbuild && chmod +x fbuild && mv fbuild /bin/fbuild && rm fastbuild.zip

RUN git config --global advice.detachedHead false
RUN --mount=type=bind,target=fbuild-demo-remote git clone fbuild-demo-remote fbuild-demo

RUN echo 'export EDITOR=vim' \
    '\nalias vim="vim -p"' \
    '\nalias gso="git show --oneline"' \
    '\nalias ls="ls --color=auto"' >> ~/.bashrc

WORKDIR fbuild-demo


ENTRYPOINT /bin/bash
