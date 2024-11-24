#include <stddef.h>
#include <stdlib.h>

#include "../service/func.h"

int *array(int row, int colum, int min, int max) {
    int *arr = (int *) malloc(row * colum * sizeof(int *));
    for (int i = 0; i < row * colum; i++) {
        arr[i] = random_num(min, max);
    }
    return arr;
}

int *sort_array(int arr[], int row, int colum) {
    int temp;
    int len = row * colum;
    int *sortArr = (int *) malloc(len * sizeof(int *));
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++) {
        sortArr[i] = arr[i];
    }
    return sortArr;
}

int **matrix_created(int *arr, int row, int colum) {
    int **matrix = (int **) malloc(row * sizeof(int *));
    if (matrix == NULL) {
        return NULL;
    }
    int count = 0;
    for (int i = 0; i < row; i++) {
        matrix[i] = malloc(colum * sizeof(int *));
        for (int j = 0; j < colum; j++) {
            matrix[i][j] = arr[count];
            count++;
        }
    }
    return matrix;
}

int **matrix_snake(int sortArr[], int row, int colum) {
    int **matrixSnake = (int **) malloc(row * sizeof(int *));
    if (matrixSnake == NULL) {
        return NULL;
    }
    int count = 0;
    for (int i = 0; i < row; i++) {
        matrixSnake[i] = (int *) malloc(colum * sizeof(int *));
        if (matrixSnake[i] == NULL) {
            for (int j = 0; j < i; j++) {
                free(matrixSnake[j]);
            }
            free(matrixSnake);
            return NULL;
        }
        if (i % 2 == 0) {
            for (int j = 0; j < colum; j++) {
                matrixSnake[i][j] = sortArr[count++];
            }
        } else {
            for (int j = colum - 1; j >= 0; j--) {
                matrixSnake[i][j] = sortArr[count++];
            }
        }
    }
    return matrixSnake;
}
