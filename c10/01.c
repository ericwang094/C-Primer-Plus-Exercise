#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(void) {
    const float rain[YEARS][MONTHS] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
    };

    int year, month;
    float subtot, total;

    printf(" YEAR RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++) {
        for (month = 0, subtot = 0; month < MONTHS; month++) {
            subtot += *(*(rain + year) + month);
        }
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }

    printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct");
    printf(" Nov Dec\n");

    for (month = 0; month < MONTHS; month++) {
        for (year = 0, subtot = 0; year < YEARS; year++) {
            subtot += *(*(rain + year) + month);
        }
        printf("%4.1f", subtot/YEARS);
    }

    printf("\n");

    return 0;
}
