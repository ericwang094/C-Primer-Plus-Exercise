#include <stdio.h>

int find_largest(int *arr, int num_ele);

int main(void) {
    int arr[4] = {3, 1, 4, 2};
    int largest = find_largest(arr, 4);
    printf("%d ", largest);
}


int find_largest(int *arr, int num_ele) {
    int temp_largest = *arr;

    for (int i = 0; i < num_ele; i++) {
        if (arr[i] > temp_largest) {
            temp_largest = arr[i];
        }
    }

    return temp_largest;
}
