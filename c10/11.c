#include <stdio.h>

void display_arr(int row, const int arr[row][5]);
void double_arr(int row, int arr[row][5]);

int main(void) {

    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };

    double_arr(3, arr);
    display_arr(3, arr);

    return 0;
}


void display_arr(int row, const int arr[row][5]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }
}

void double_arr(int row, int arr[row][5]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = arr[i][j] * 2;
        }
    }
}



