#include <stdio.h>

int main(void) {

    char c;
    int num_replaces = 0;

    const char STOP = '#';
    const char PERIOD = '.';
    const char EXCLAMATION = '!';


    while ((c = getchar()) != STOP) {
        if (c == PERIOD) {
            putchar(EXCLAMATION);
            putchar(EXCLAMATION);
            num_replaces++;
        } else {
            putchar(c);
        }
    }
    printf("\n");
    printf("Number of replaces: %d\n", num_replaces);

    return 0;
}
