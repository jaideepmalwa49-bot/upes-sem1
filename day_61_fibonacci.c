#include <stdio.h>
/* Day 61 of 100 Days Coding Challenge: Fibonacci Series */
int main() {
    int i, n = 10, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    printf("\n");
    return 0;
}
