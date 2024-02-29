#include <stdio.h>
#include "fib.h"
#include "fib_iter.h"

int main() {
    printf("Hello, World!\n");
    for (int i = 0; i < 5; i++) {
        printf("recursive_fib(%d): %d\n", i, recursive_fib(i));
    }
    for (int i = 0; i < 5; i++) {
        printf("iterative_fib(%d): %d\n", i, iterative_fib(i));
    }

    return 0;
}
