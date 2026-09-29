#include <stdio.h>
/* Day 35 of 100 Days Challenge: Power Calculation */
int main() {
    int base = 2, exp = 4;
    long long res = 1;
    for(int i=0; i<exp; i++) res *= base;
    printf("Power: %lld\n", res);
    return 0;
}
