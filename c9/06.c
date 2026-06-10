#include <stdio.h>

void swap_three(double * x, double * y, double * z);

int main(void) {
    double x, y, z;

    while (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
        swap_three(&x, &y, &z);
        printf("%.2lf, %.2lf, %.2lf\n", x, y, z);

        while (getchar() != '\n') continue;
    }
    return 0;
}


void swap_three(double * x, double * y, double * z) {
    double temp;

    if (*x > *y) {
        temp = *x;
        *x = *y;
        *y = temp;
    }

    if (*y > *z) {
        temp = *y;
        *y = *z;
        *z = temp;

        if (*x > *y) {
            temp = *x;
            *x = *y;
            *y = temp;
        }
    }
}
