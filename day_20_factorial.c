#include <stdio.h>
/* Day 20 of 100 Days Coding Challenge: Factorial Calculation */
int main() {
    int n = 5, i;
    unsigned long long fact = 1;
    for (i = 1; i <= n; ++i) {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}
