#include "fib_iter.h"

int iterative_fib(int i) {
    if (i <= 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }

    int n0 = 0;
    int n1 = 1;
    for (int j = 2; j <= i; j++) {
        int n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
    }
    return n1;
}
