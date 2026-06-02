#include <stdio.h>

void find_prime_factor(int num);

int main(void) {
    int input_num;

    scanf("%d", &input_num);
    
    for (int i = 3; i <= input_num; i++) {
        find_prime_factor(i);
    }
    return 0;
}


void find_prime_factor(int num) {
    int prime_flag = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            prime_flag = 0;
            break;
        }
    }
    
    if (prime_flag) {
        printf("%d is prime.\n", num);
    }
}
