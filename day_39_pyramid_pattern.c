#include <stdio.h>
/* Day 39 of 100 Days Challenge: Pyramid Pattern */
int main() {
    for(int i=1; i<=5; ++i) {
        for(int j=1; j<=i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
