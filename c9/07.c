#include <stdio.h>
#include <ctype.h>

int letter_loc(char c);

int main(void) {
    char c;

    while ((c = getchar()) != EOF) {
        int loc = letter_loc(c);

        printf("the input char is %c, its numerical location in the alphabet is %d.\n", c, loc);

        while (getchar() != '\n') continue;
    }
}

int letter_loc(char c) {
    if (isalpha(c)) {
        return tolower(c) - 'a' + 1;
    }

    return -1;
}
