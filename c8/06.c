#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void) {
    return 0;
}

char get_first(void) {
    int ch;
    ch = getchar();
    while (isspace(ch)) {
        continue;
    }

    return ch;
}
