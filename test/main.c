#include <stdio.h>
#include "trans.c"


int main() {
    int  r, c, i, j, a[r][c];
    printf("Enter no.of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nEnter matrix elements:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    
    int trans[c][r]; 

    transpose(r, c, a, trans);

    // Displaying the trans of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d  ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
