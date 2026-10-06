#include <stdio.h>
/* Day 42 of 100 Days Coding Challenge: Palindrome Check */
int main() {
    int n = 121, reversed = 0, remainder, original;
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
    return 0;
}
