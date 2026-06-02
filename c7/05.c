#include <stdio.h>

int main(void) {
    char c;

    const char STOP = '#';
    const char EXCLAMATION = '!';
    const char PERIOD = '.';

    int num_exclamations = 0;

    while ((c = getchar()) != STOP) {
        switch(c) {
            case PERIOD:
                putchar(EXCLAMATION);
                putchar(EXCLAMATION);
                num_exclamations++;
                break;
            default:
                putchar(c);
        }
    }
    printf("\n");
    printf("Number of replacement: %d\n", num_exclamations);
    return 0;
}
