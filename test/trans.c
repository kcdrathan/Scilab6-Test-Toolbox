#include <stdio.h>
// Finding the trans of matrix a
        
void transpose(int r, int c, int a[][c], int trans[][r]) 
{ 
    int i, j; 
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            trans[i][j] = a[j][i];
    }
} 
