#include <stdio.h>
#include <string.h>
/* Day 74 of 100 Days Challenge: String Reverse */
int main() {
    char str[] = "GithubCodespace";
    int n = strlen(str);
    for (int i = 0; i < n/2; i++) {
        char temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    printf("Reversed: %s\n", str);
    return 0;
}
