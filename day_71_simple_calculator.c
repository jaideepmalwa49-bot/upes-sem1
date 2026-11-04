#include <stdio.h>
/* Day 71 of 100 Days Challenge: Simple Calculator */
int main() {
    char op = '+';
    int a = 12, b = 8;
    switch(op) {
        case '+': printf("Sum: %d\n", a+b); break;
        default: printf("Error\n");
    }
    return 0;
}
