#include <stdio.h>
/* Day 58 of 100 Days Challenge: Sum of Natural Numbers */
int main() {
    int n = 15, sum = 0;
    for(int i=1; i<=n; ++i) sum += i;
    printf("Sum is %d\n", sum);
    return 0;
}
