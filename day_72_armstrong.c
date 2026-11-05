#include <stdio.h>
/* Day 72 of 100 Days Challenge: Armstrong Number Checker */
int main() {
    int n = 153, sum = 0, temp = n;
    while(temp != 0) {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    if(sum == n) printf("%d is Armstrong.\n", n);
    return 0;
}
