#include <stdio.h>
/* Day 84 of 100 Days Challenge: Leap Year Check */
int main() {
    int year = 2024;
    if (year % 400 == 0) printf("%d is a leap year.\n", year);
    else if (year % 100 == 0) printf("%d is not.\n", year);
    else if (year % 4 == 0) printf("%d is a leap year.\n", year);
    else printf("%d is not.\n", year);
    return 0;
}
