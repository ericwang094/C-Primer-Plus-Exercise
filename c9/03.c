#include <stdio.h>

void print_char_line(char ch, int rep, int row);

int main(void) {

    char ch;
    int rep, row;

    while (scanf("%c %d %d", &ch, &rep, &row) == 3) {

        print_char_line(ch, rep, row);
        printf("\n");

        while (getchar() != '\n') continue;
    }

    return 0;
}


void print_char_line(char ch, int rep, int row) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < rep; j++)
        {
            putchar(ch);
        }
        printf("\n");
    }
}
