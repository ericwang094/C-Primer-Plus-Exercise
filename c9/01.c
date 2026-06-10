#include <stdio.h>

double min(double x, double y);

int main(void) {
    double x, y;
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        double smaller = min(x, y);
        printf("%.2f", smaller);
        return 0;
    }
}

double min(double x, double y) {
    return x < y ? x : y;
}
