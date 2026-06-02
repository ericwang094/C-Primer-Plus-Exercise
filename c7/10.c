#include <stdio.h>

int main(void) {
    const int TAX_CATEGORY_SINGLE           = 1;
    const int TAX_CATEGORY_HEAD             = 2;
    const int TAX_CATEGORY_MARRIED_JOINT    = 3;
    const int TAX_CATEGORY_MARRIED_SEPARATE = 4;

    const float TAX_RATE        = 0.15F;
    const float TAX_RATE_EXCESS = 0.28F;

    int tax_category;
    int income;
    float tax_rate = 0.15F;
    float tax_rate_excess = 0.28F;
    int tax_threshold;
    
    while(scanf("%d %d", &tax_category, &income) != 1) {

        switch(tax_category) {
            case TAX_CATEGORY_SINGLE:
                tax_threshold = 17850;
                break;
            case TAX_CATEGORY_HEAD:
                tax_threshold = 23900;
                break;
            case TAX_CATEGORY_MARRIED_JOINT:
                tax_threshold = 29750;
                break;
            case TAX_CATEGORY_MARRIED_SEPARATE:
                tax_threshold = 14875;
                break;
            default:
                printf("Invalid input, you can only choose from 1 to 4.\n");
        }

        int tax = 0;
        if (income < tax_threshold) {
            tax = income * tax_rate;
        } else {
            tax = tax_threshold * tax_rate + (income - tax_threshold) * tax_rate_excess;
        }

        printf("Tax: %d\n", tax);
    }

    return 0;
}
