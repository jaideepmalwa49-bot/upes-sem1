#include <stdio.h>
/* Day 46 of 100 Days Challenge: Vowel or Consonant */
int main() {
    char c = 'e';
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a vowel.\n", c);
    else
        printf("%c is a consonant.\n", c);
    return 0;
}
