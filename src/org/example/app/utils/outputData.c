#include <stdio.h>

void print_matrix(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
