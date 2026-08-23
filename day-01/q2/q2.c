#include <stdio.h>
int main () {
    int a , b;
    scanf("%d %d", &a, &b);
    printf("sum = %d", a + b);
    printf(",diff= %d", a - b);
    printf(",product= %d", a * b);
    if (b != 0)
    printf(", Quotient = %d", a / b);
    else
    printf(", Quotient = Cannot divide by zero");
    return 0;
}

