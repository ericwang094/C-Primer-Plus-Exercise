#include <stdio.h>

int main(void) {
    char c;

    int char_index_arr[96] = {0};

    const char STOP = '#';

    int print_new_line = 0;

    while ((c = getchar()) != STOP) {
        int char_index = c - 32;
        char_index_arr[char_index] = 1;
    }

    int character_count = 0;
    for (int i = 0; i < 96; i++) {
        if (char_index_arr[i] == 1) {
            printf("%c: %3d | ", i + 32, i + 32);
            character_count++;
            if (character_count == 8) {
                printf("\n");
                character_count = 0;
            }
        }
    }

    return 0;
}
