#include <stdio.h>
int main() {
    float radius, area , circumfernce;
    scanf("%f" , &radius);
    area = 3.14 * radius * radius;
    circumfernce = 2 * 3.14 * radius;
    printf("area=%f , circumfernce=%f" ,area , circumfernce);
    return 0;
}    
