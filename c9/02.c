#include <stdio.h>

void chline (char ch, int i, int j);

int main(void) {
    char ch;
    int i, j;
    while (scanf("%c %d %d", &ch, &i, &j) == 3) {
        chline(ch, i, j);
        printf("\n");

        while (getchar() != '\n') continue;
    }

    return 0;
}

void chline(char ch, int i, int j) {
    for (int k = 0; k < i; k++) {
        putchar(' ');
    }

    for (int k = i; k <= j; k++) {
        putchar(ch);
    }

    return;
}
