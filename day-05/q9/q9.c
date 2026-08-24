#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float si, ci, amount;

    scanf("%f %f %f", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    amount = principal * pow( (1 + rate / 100), time);
    ci = amount - principal;
    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);


    return 0;
}
