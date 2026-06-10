#include <stdio.h>

void larger_of(double * x, double * y);

int main(void) {

    double x, y;
    while (scanf("%lf %lf", &x, &y) == 2) {
        larger_of(&x, &y);
        printf("%.2lf, %.2lf\n", x, y);

        while (getchar() != '\n') continue;
    }
}

void larger_of(double * x, double * y) {
    if (*x > *y) {
        *y = *x;
    } else {
        *x = *y;
    }
}
