#include <stdio.h>

int main(void) {
    const float PAY_RATE = 10.0F;
    const float OVERTIME_HOUR =  40.0F;
    const float OVERTIME_MULTIPLIER = 1.5F;
    const float TAX_RATE_STEP_1 = 0.15F;
    const float TAX_RATE_STEP_2 = 0.2F;
    const float TAX_RATE_STEP_3 = 0.25F;

    int hours_worked;
    float gross_pay = 0;
    float tax = 0;

    while (scanf("%d", &hours_worked) == 1) {
        if (hours_worked > 40) {
            gross_pay += 40 * PAY_RATE + (hours_worked - 40) * PAY_RATE * OVERTIME_MULTIPLIER;
        } else {
            gross_pay += hours_worked * PAY_RATE;
        }

        float taxable_income = gross_pay;
       
        if (taxable_income > 300) {
            tax += 300 * TAX_RATE_STEP_1;
            if (taxable_income - 450 > 0) {
                tax += 150 * TAX_RATE_STEP_2;
                tax += (taxable_income - 450) * TAX_RATE_STEP_3;
            } else {
                tax += (taxable_income - 300) * TAX_RATE_STEP_2;
            }
        } else {
            tax += taxable_income * TAX_RATE_STEP_1;
        }

    }

    printf("Gross Pay: %f, Tax: %.2f, Net Pay: %.2f\n", gross_pay, tax, gross_pay - tax);
}
