#include <stdio.h>
/* Day 43 of 100 Days Coding Challenge: Greatest of Three */
int main() {
    double n1 = 12.5, n2 = 23.4, n3 = 19.8;
    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.\n", n2);
    else
        printf("%.2f is the largest number.\n", n3);
    return 0;
}
