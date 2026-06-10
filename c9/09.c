#include <stdio.h>
#include <stdlib.h>

double power(double base, int power);

int main(void) {
    double base;
    int power_num;
    while (scanf("%lf, %d", &base, &power_num) == 2) {
        double result = power(base, power_num);
        printf("%.2lf raised to the power of %d is %.2lf.\n", base, power, result);

        while(getchar() != '\n') continue;
    }
    return 0;
}

double power(double base, int power_num) {
    if (power_num == 0) {
        return 1;
    }

    double result = base * power(base, abs(power_num) - 1);
    if (power < 0) {
        result = 1 / result;
    }

    return result;
}
