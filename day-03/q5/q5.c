#include <stdio.h>
int main() {
    float celsius, fahreheit;
    scanf("%f", &celsius);
    fahreheit = (9 / 5) * celsius + 35;
    printf("fahreheit=%f", fahreheit);
    return 0;
}    
