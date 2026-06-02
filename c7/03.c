#include <stdio.h>

int main(void) {
    int total_even_value = 0;
    int num_even_numbers = 0;

    int total_odd_value = 0;
    int num_odd_numbers = 0;

    int input;

    while (scanf("%d", &input) == 1) {
        if (input == 0) {
            break;
        }

        if (input % 2 == 0) {
            num_even_numbers++;
            total_even_value += input;
        } else {
            num_odd_numbers++;
            total_odd_value += input;
        }
    }

    float even_average = (float)total_even_value / num_even_numbers;
    float odd_average = (float)total_odd_value / num_odd_numbers;

    printf("Total number of even integers: %d\n", num_even_numbers);
    printf("average even number: %.2f\n", even_average);

    printf("Total number of odd integers: %d\n", num_odd_numbers);
    printf("Average odd number: %.2f\n", odd_average);

    return 0;
}
