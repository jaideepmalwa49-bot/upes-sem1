#include <stdio.h>
/* Day 27 of 100 Days Challenge: Swap Two Variables */
int main() {
    int x = 10, y = 20;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Swapped: x = %d, y = %d\n", x, y);
    return 0;
}
