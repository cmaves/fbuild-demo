#include <stdio.h>
#include "fib.h"

int main() {
    printf("Hello, World!\n");
    for (int i = 0; i < 2; i++) {
        printf("fib(%d): %d\n", i, recursive_fib(i));
    }
    return 0;
}
