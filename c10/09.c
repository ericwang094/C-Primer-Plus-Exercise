#include <stdio.h>

void display_arr(int *arr, int num_elem);
void copy_arr(int row, int col, double target[row][col], double source[row][col]); 

int main(void) {
    
    double source_arr[2][2] = {
        {1, 1},
        {2, 2}
    };

    double target_arr[2][2];

    copy_arr(2, 2, target_arr, source_arr);

    return 0;
}

void copy_arr(int row, int col, double target[row][col], double source[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            target[i][j] = source[i][j];
        }
    }
}

void display_arr(int *arr, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        printf("%d ", *(arr + i));
    }
}

