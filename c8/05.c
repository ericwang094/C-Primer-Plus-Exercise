#include <stdio.h>

int binary_search(int low, int high);

int main(void) {
    const int LOW = 1;
    const int HIGH = 100;

    printf("Pick an integer from 1 to 100 and tell me if my guess is too high or too low");
    printf("Enter 1 for too high, enter 2 too low");
    printf("Enter Y if the guess is correct.\n");
    
    char c;
    int initial_guess = 50;
    
    int low = LOW;
    int high = HIGH;

    printf("My guess is %d\n", initial_guess);

    while ((c = getchar()) != EOF) {
        
        printf("My guess is %d\n", initial_guess);
        if (c == 'y')
        {
            printf("I knew the answer is %d\n", initial_guess);
            break;
        } else if (c == '1') {
            high = initial_guess;
        } else if (c == '2') {
            low = initial_guess;
        }

        initial_guess = binary_search(low, high);
    }
    return 0;
}

int binary_search(int low, int high) {
    int guess = (low + high) / 2;
    return guess;
}
