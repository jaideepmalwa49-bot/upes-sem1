#include <stdio.h>
/* Day 70 of 100 Days Challenge: Linear Search */
int main() {
    int arr[] = {5, 12, 8, 30};
    int search = 8, found = 0;
    for(int i=0; i<4; i++) {
        if(arr[i] == search) { found = 1; break; }
    }
    if(found) printf("Element found.\n");
    return 0;
}
