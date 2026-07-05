#include <stdio.h>

void display_arr(int *arr, int elem);
void sum_arr(int *source1, int *source2, int *sum_arr, int num_elem);

int main(void) {
    int source1[5] = {1, 2, 3, 4, 5};
    int source2[5] = {2, 3, 4, 5, 6};
    int target[5];

    sum_arr(source1, source2, target, 5);
    display_arr(target, 5);

    return 0;
}

void display_arr(int *arr, int elem) {
    for (int i = 0; i < elem; i++) {
        printf("%d, ", *(arr + i));
    }
}

void sum_arr(int *source1, int *source2, int *sum_arr, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        *(sum_arr + i) = *(source1 + i) + *(source2 + i);
    }
}
