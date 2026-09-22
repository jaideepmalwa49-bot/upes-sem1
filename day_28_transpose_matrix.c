#include <stdio.h>
/* Day 28 of 100 Days Challenge: Matrix Transpose */
int main() {
    int mat[2][2] = {{1, 2}, {3, 4}};
    int trans[2][2];
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transposed Matrix Row 1: %d %d\n", trans[0][0], trans[0][1]);
    return 0;
}
