#include <stdio.h>
#include <stdbool.h>

int main(void) {
   
    char c;
    char prev_c;
    int num_ei_squence = 0;

    const char STOP = '#';
    
    bool first_loop = true;

    while ((c = getchar()) != STOP) {
        if (first_loop) {
            first_loop = false;
            continue;
        }
        
        if (prev_c == 'e' && c == 'i') {
            num_ei_squence++;
        }

        prev_c = c;
    }

    printf("Number of \"ei\" sequence: %d\n", num_ei_squence);
    return 0;
}
