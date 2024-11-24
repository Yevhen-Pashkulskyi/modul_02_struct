#ifndef _ORG_EXAMPLE_APP_SERVICE_FUNC_H_
#define _ORG_EXAMPLE_APP_SERVICE_FUNC_H_

int run();

void print_arr(int *arr, int row, int colum);

void print_matrix(int **matrix, int row, int colum);

int random_num(int min, int max);

int *array(int row, int colum, int min, int max);

int *sort_array(int arr[], int row, int colum);

int **matrix_created(int *arr, int row, int colum);

int **matrix_snake(int sortArr[], int row, int colum);

#endif
