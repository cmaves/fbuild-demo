#include "fib.h"

int recursive_fib(int i) {
    if (i <= 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    return recursive_fib(i-1) + recursive_fib(i-2);
}
