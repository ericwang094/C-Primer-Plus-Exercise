#include <stdio.h>

int main(void) {
    char c;
    int print_character_count = 0;

    while ((c = getchar()) != EOF) {
        if (c >= ' ') {
            printf("%c: %d", c, c);
        } else if (c == '\n') {
            printf("\\n: %d", c);
        } else if (c == '\t') {
            printf("\\t: %d", c);
        } else {
            printf("^%c: %d", c + 64, c);
        }

        print_character_count++;
        if (print_character_count % 10 == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    return 0;
}
