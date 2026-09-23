#include <stdio.h>
/* Day 29 of 100 Days Challenge: Bubble Sort */
int main() {
    int arr[] = {4, 1, 9, 2};
    int n = 4;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array element 0: %d\n", arr[0]);
    return 0;
}
