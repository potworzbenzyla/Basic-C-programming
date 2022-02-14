///Eight queens problem solution

#include "stdio.h"

short int dia_r[256];
short int dia_l[256];
short int col[8];
short int chart[8][8];
int found = 0;

void printCombination(void) {
    int x,y;
    printf("kombination: %d\n", found);
    printf("  ABCDEFGH\n\n");
    for (y=7; y>=0; y--) {
        printf("%d ", y+1);
        for (x=0; x<8; x++) {
            if (chart[x][y]) {
                    printf("H");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

void add_hetman(int row) {
    int i;
    for (i=0; i<8; i++) {
        if (!((col[i] == 1) || (dia_r[i-row+128] == 1) || (dia_l[row+i+128] == 1))) {
            dia_r[i-row+128] = 1;
            dia_l[row+i+128] = 1;
            col[i] = 1;
            chart[i][row] = 1;

            if (row<7) {
                add_hetman(row+1);
            }
            else {
                found++;
                printCombination();
            }

            dia_r[i-row+128] = 0;
            dia_l[row+i+128] = 0;
            col[i] = 0;
            chart[i][row] = 0;
        }
    }
}

int main(void) {
    int i,j;
    for (i=0; i<256; i++) {
        dia_r[256] = 0;
        dia_l[256] = 0;
    }
    for (i=0; i<8; i++) {
        col[8] = 0;
    }
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            chart[i][j] = 0;
        }
}

add_hetman(0);

return 0;
}
