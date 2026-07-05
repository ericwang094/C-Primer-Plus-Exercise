#include <stdio.h>

void copy_arr(double target1[], double source[], int num_element);
void copy_ptr(double *target2, double *source, int num_element);
void copy_ptrs(double *target3, double *source, double *last_elem);

void display_arr(double *arr, int num_elem);

int main(void) {
    double source[4] = {1.0, 2.0, 3.0, 4.0};
    double target1[4];
    double target2[4];
    double target3[4];

    copy_arr(target1, source, 4);
    display_arr(target1, 4);

    copy_ptr(target2, source, 4);
    display_arr(target2, 4);

    copy_ptrs(target3, source, source + 3);
    display_arr(target3, 4);

    return 0;
}

void display_arr(double *arr, int num_elem) {
    for (int i = 0; i < num_elem; i++) {
        printf("%f ", *(arr + i));
    }
    printf("\n");
}

void copy_arr(double target1[], double source[], int num_element) {
    for (int i = 0; i < num_element; i++) {
        target1[i] = source[i];
    }
}

void copy_ptr(double *target2, double *source, int num_element) {
    for (int i = 0; i < num_element; i++) {
        *(target2 + i) = *(source + i); 
    }
}

void copy_ptrs(double *target3, double *source, double *last_elem) {
    while (source <= last_elem) {
        *target3 = *source;
        target3++;
        source++;
    }
}
