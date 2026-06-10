#include <stdio.h>

int fibonacci(int n);

int main(void) {
    int n;
    while (scanf("%d", &n) == 1) {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is %d.\n", n, result);

        while (getchar() != '\n') continue;
        
    }

    return 0;
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n <= 2) {
        return 1; 
    }
    int cur_num = 1;
    int prev_num = 1;
    int result = 0;
    for (int i = 3; i <= n; i++) {
        result = cur_num + prev_num;
        prev_num = cur_num;
        cur_num = result;
    }

    return result;
}

