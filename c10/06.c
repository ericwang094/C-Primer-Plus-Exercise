#include <stdio.h>

void reverse(double arr[], int elem);
void display_arr(double arr[], int elem);

int main(void) {
    double arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 10);

    display_arr(arr, 10);
}

void display_arr(double arr[], int elem) {
    for (int i = 0; i < elem; i++) {
        printf("%f ", arr[i]);
    }
}


void reverse(double arr[], int elem) {
    int first_index = 0;
    int last_index = elem - 1;

    while (first_index < last_index) {
        double temp = arr[first_index];
        arr[first_index] = arr[last_index];
        arr[last_index] = temp;

        first_index++;
        last_index--;
    }
}
