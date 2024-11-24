#include <stdio.h>

void print_matrix(int **arr, int row, int colum) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
