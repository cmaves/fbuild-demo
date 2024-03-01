# FASTBuild Demo
This demo is intend to show how to compile and link a basic program FASTBuild,
and use dynamic libraries in a build configuration
Some common patterns used in FASTBuild will be shown.

## Prerequisites 
- Git for Windows or Git (if not Windows)
- If you wish to run the FASTBuild command you will need Docker installed.

## Format of the demo
The FASTBuild demo is shown as a series commits in the repo with the root commit being the starting point.
Each of these commits represents incremental progress, starting with a very simple config, and finishing with
a config with build flavours, cross-compilation, and libraries.
There are 23 steps in total.
The commit messages gives a summary of what was done and provides a TODO of what will be done next.

The FASTBuild configuration can be run in this in a Docker container.
By using Docker to run the configuration,
it allows us to have a consistent environment without the viewer of this demo having to setup their machine.

## Progressing through the demo.
1) To start the demo, open the repository in your terminal.
2) Run `docker build -t fbuild .`.
   This builds the docker container with the approriate tools to configure.
   If you do not wish to run any FBuild commands you can skip to step 4,
   and run your commands bash or Git bash on Windows.
3) Start the docker container with `docker run -it fbuild`
4) Inside the docker container, run `git checkout step-00`.
   This initial step doesn't create an FASTBuild config.
   - This initial tag shows the basic program we will compile and link.
   - From here you can run `./next` to progress to the next step.
     This progresses from step-___n___ to step-___n+1+___.
   - You can also use `./prev` to go backwards.
   - At each step you can use the following fbuild commands to explorer the config.
       - `fbuild TARGET`: Builds the target given by TARGET.
       - `fbuild`: Runs the default target.
         This is equivelent to `fbuild all`.
         ___Note: Step 16 and 17 have valid config but the commands will fail___
      - `fbuild -showtargets`: Show the targets defined by the config
      - `fbuild -showdeps [TARGET]`: Show the dependencies for TARGET (or all if not given).
   - Some other useful commands:
       - `git clean -Xf .`: This cleans up the repository.
