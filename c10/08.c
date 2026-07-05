#include <stdio.h>

void copy_arr(int *target_arr, int *source_arr, int num_elem);
void display_arr(int *arr, int num_elem);

int main(void) {
    
    int source_arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int target_arr[3];

    copy_arr(target_arr, source_arr + 3, 5);
    display_arr(target_arr, 3);
    return 0;
}

void copy_arr(int *target_arr, int *source_arr, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        *(target_arr + i) = *(source_arr + i);
    }
}

void display_arr(int *arr, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        printf("%d ", *(arr + i));
    }
}
