#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int num_lower_case = 0;
    int num_upper_case = 0;
    int num_other_chars = 0;

    while ((c = getchar()) != EOF) {
        if (islower(c)) {
            num_lower_case++;
        } else if (isupper(c)) {
            num_upper_case++;
        } else {
            num_other_chars++;
        }
    }

    printf("Number of lower case %d, number of upper case %d, number of other chars %d\n", num_lower_case, num_upper_case, num_other_chars);

    return 0;
}
