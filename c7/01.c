#include <stdio.h>
#include <ctype.h>

int main(void) {

    char c;
    int num_space = 0;
    int num_newline = 0;
    int num_other_chars = 0;

    const char SPACE = ' ';
    const char NEW_LINE = '\n';
    const char STOP = '#';

    while ((c = getchar()) != STOP) {
        switch(c) {
            case SPACE:
                num_space++;
                break;
            case NEW_LINE:
                num_newline++;
                break;
            default:
                num_other_chars++;
                break; 
        }
    }
    printf("Number of spaces: %d, number of new lines: %d, number of other chars: %d\n", num_space, num_newline, num_other_chars);
    return 0;
}
