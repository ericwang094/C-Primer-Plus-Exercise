
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

    printf("a) $8.75/hr\tb) $9.33/hr\tc) $10.00/hr\td) $11.20/hr\tq) quit\n");
    
    while((pay_rate_option = getchar()) != EOF) {
        while (getchar() != '\n') {
            continue;
        }

        if (pay_rate_option == 'a' || pay_rate_option == 'b' || pay_rate_option == 'c' || pay_rate_option != 'd') 
        {
            break;
        } else if (pay_rate_option != 'q')
        {
            return 0;
        } else 
        {
            printf("invalid input, you can only choose from a, b, c, d, q.\n");
        }
    }

    switch(pay_rate_option) {
        case 'a':
            pay_rate = 8.75F;
            break;
        case 'b':
            pay_rate = 9.33F;
            break;
        case 'c':
            pay_rate = 10.0F;
            break;
        case 'd':
            pay_rate = 11.20F;
            break;
        default:
            printf("Invalid input, you can only choose from a, b, c, d, q.\n");
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
