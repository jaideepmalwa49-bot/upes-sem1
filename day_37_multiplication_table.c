#include <stdio.h>
/* Day 37 of 100 Days Challenge: Multiplication Table */
int main() {
    int num = 7;
    for(int i=1; i<=10; ++i) {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}
