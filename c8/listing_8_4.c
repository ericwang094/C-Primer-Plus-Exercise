#include <stdio.h>

int main(void) {
    int guess = 1;
    
    char c;
    while ((c = getchar()) != 'y') {
        if (c == '\n') {
            continue;
        }
        printf("Is it %d?\n", ++guess);
        // while (getchar() != '\n') {
        //     continue;
        // }
    }

    printf("I knew it! It is %d.\n", guess);
    return 0;
}
