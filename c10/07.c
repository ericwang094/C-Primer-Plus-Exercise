#include <stdio.h>


void copy_arr(int target[], int source[], int num_elem);
void display_arr(int arr[][5], int row, int col);

int main(void) {
    int arr_two[5][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    int target_arr_two[5][5];

    for (int i = 0; i < 5; i++) {
        copy_arr(target_arr_two[i], arr_two[i], 5);
    }

    display_arr(target_arr_two, 5, 5);
    return 0;
}

void copy_arr(int target[], int source[], int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        target[i] = source[i];
    }
}

void display_arr(int arr[][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d,", *(*(arr+i)+j));
        }
        printf("\n");
    }
}
