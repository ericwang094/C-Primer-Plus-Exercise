#include <stdio.h>

double difference_small_large(double arr[], int num_elem);

int main(void) {
    double arr[] = {2.2, 1.1, 4.4, 3.3, 10.1};

    double difference = difference_small_large(arr, 5);

    printf("%f ", difference);
    return 0;
}


double difference_small_large(double arr[], int num_elem) {
    double smallest_elem = arr[0];
    double largest_elem = arr[0];

    for (int i = 0; i < num_elem; i++) {
        if (arr[i] < smallest_elem) {
            smallest_elem = arr[i];
        }

        if (arr[i] > largest_elem) {
            largest_elem = arr[i];
        }
    }

    double difference = largest_elem - smallest_elem;
    return difference;
}
