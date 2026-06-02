#include <stdio.h>

int main(void) {
    const float OVERTIME_HOUR =  40.0F;
    const float OVERTIME_MULTIPLIER = 1.5F;
    const float TAX_RATE_STEP_1 = 0.15F;
    const float TAX_RATE_STEP_2 = 0.2F;
    const float TAX_RATE_STEP_3 = 0.25F;

    float pay_rate;
    int pay_rate_option;
    int hours_worked;
    float gross_pay = 0;
    float tax = 0;
    
    printf("Enter the number corresponding to the desired pay rate or action:\n");

    printf("1) $8.75/hr\t2) $9.33/hr\t3) $10.00/hr\t4) $11.20/hr\t5) quit\n");

    while(scanf("%d", &pay_rate_option) != 1) {
        printf("Invalid input, you can only choose from 1 to 5.\n");
        if (pay_rate_option > 5 || pay_rate_option < 1) {
            printf("invalid input, you can only choose from 1 to 5.\n");
        }

        if (pay_rate_option == 5) {
            return 0;
        }
    }

    switch(pay_rate_option) {
        case 1:
            pay_rate = 8.75F;
            break;
        case 2:
            pay_rate = 9.33F;
            break;
        case 3:
            pay_rate = 10.0F;
            break;
        case 4:
            pay_rate = 11.20F;
            break;
        default:
            printf("Invalid input, you can only choose from 1 to 5.\n");
            return 0;
    }


    while (scanf("%d", &hours_worked) == 1) {
        if (hours_worked > 40) {
            gross_pay += 40 * pay_rate + (hours_worked - 40) * pay_rate * OVERTIME_MULTIPLIER;
        } else {
            gross_pay += hours_worked * pay_rate;
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
