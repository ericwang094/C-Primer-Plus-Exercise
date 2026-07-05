# include <stdio.h>

int largest_index(double arr[], int num_elem);

int main(void) {
    double arr[4] = {3.3, 4.4, 2.2, 1.1};

    int largest_idx = largest_index(arr, 4);
    printf("%d ", largest_idx);
    return 0;
}


int largest_index(double arr[], int num_elem) {
    int largest_index = 0;

    for (int i = 0; i < num_elem; i++) {
        if (arr[i] > arr[largest_index]) {
            largest_index = i;
        }
    }

    return largest_index;
}



