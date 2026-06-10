#include <stdio.h>

double harmonic_mean(double x, double y);

int main(void) {
    
    double x, y;
    while (scanf("%lf %lf", &x, &y) == 2) {
        double result = harmonic_mean(x, y);
        printf("The harmonic mean of %.2lf and %.2lf is %.2lf.\n", x, y, result);
    }

    return 0;
}


double harmonic_mean(double x, double y) {
    return 1 / ((1 / x + 1 / y) / 2);
}
