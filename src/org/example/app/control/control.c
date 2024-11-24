#include <stdio.h>
#include <stdlib.h>

#include "../service/func.h"

int run() {
    int const MIN_ROW_COL = 2, MAX_ROW_COL = 5;
    int const MIN_VALUE = 1, MAX_VALUE = 100;
    int choice, row, colum;

    printf("1.Start \n"
        "0. Close \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:

            row = random_num(MIN_ROW_COL, MAX_ROW_COL);
            colum = random_num(MIN_ROW_COL, MAX_ROW_COL);

            int *arr = array(row, colum, MIN_VALUE, MAX_VALUE);
            if (arr == NULL) {
                printf("Помилка виділення пам'яті.\n");
                return -1;
            }
            int **matrix = matrix_created(arr, row, colum);
            if (matrix == NULL) {
                printf("Помилка виділення пам'яті.\n");
                return -1;
            }
            print_matrix(matrix, row, colum);

            int *sortArr = sort_array(arr, row, colum);
            if (sortArr == NULL) {
                printf("Помилка виділення пам'яті.\n");
                return -1;
            }
            int **snakeMatrix = matrix_snake(sortArr, row, colum);
            if (snakeMatrix == NULL) {
                printf("Помилка виділення пам'яті.\n");
                return -1;
            }
            print_matrix(snakeMatrix, row, colum);

            free(arr);
            free(matrix);

            free(sortArr);
            free(snakeMatrix);
            run();
        case 0: break;
        default: printf("Невірний ввод!");
            run();
    }
    return 0;
}
