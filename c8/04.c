#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    int c;
    bool in_word = false;
    int letter_count = 0, word_count = 0;

    while ((c = getchar()) != EOF) {
        if (isalpha(c)) {
            letter_count++;
            if (!in_word) {
                in_word = true;
                word_count++;
            }
        } else {
            in_word = false;
        }
    }
    printf("Word Count: %d", word_count);
    int average_letters_per_word = letter_count / word_count;

    printf("Average letter per wordL %.2f\n", (float)average_letters_per_word);

    return 0;
}
