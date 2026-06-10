#include <stdio.h>
#include <stdlib.h>

int main(void) {

    return 0;
}


double power(double n, int p) {
    
    if (n == 0) {
        return 0;
    }

    if (p == 0) {
        return 1;
    }

    double pow = 1;
    int i;

    for (i = 1; i <= abs(p); i++) {
        pow *= n;
    }

    if (p < 0) {
        pow = 1/pow;
    }

    return pow;
}

