#include <stdio.h>
#include <string.h>

#define ROWS 3
#define COLS 4


int sum2d(int rows, int cols, int ar[rows][cols]);


int main(void) {
    int i, j;
    int rs = 3;
    int cs = 10;

    int junk[ROWS][COLS] = {
        {2,4,6,8},
        {3,5,7,9},
        {12,10,8,6},
    };

    int morejunk[ROWS - 1][COLS + 2] = {
        {20, 30, 40, 50, 60, 70},
        {5,6,7,8,9,10}
    };

    int varr[rs][cs];
    for (int i = 0; i < rs; i++) {
        for (int j = 0; j < cs; j++) {
            varr[i][j] = i * j + j;
        }
    }

    int result = sum2d(rs, cs, varr);
    printf("Sum of all elements = %d\n", result);

    return 0;
}


int sum2d(int rows, int cols, int ar[rows][cols]) {
    int r;
    int c;
    int tot = 0;

    for (r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            tot += ar[r][c];
        }
    }

    return tot;
}

// zippo = p_zippo,  zippo + 1 = p_zippo + 4 * 2 = p_zippo + 8
// zippo[0] = p_zippo, zippo[0] + 1 = p_zippo + 4
// *zippo = p_zippo, *zippo + 1 = p_zippo + 4
//
// zippo[0][0] = 2
// *zippo[0] = 2
// **zippo = 2
// zippo[2][1] = 3
// *(*(zippo + 2 ) + 1) = 3



