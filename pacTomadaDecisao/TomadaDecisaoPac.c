#include <stdio.h>

int main () {
    int live = 1;
    int x = 1, y = 1;
    int test = 0;
    int pac[x][y];
    int way = 1;
    char map[10][11] = {
        "nnnnnnnnnn",
        "nssssssssn",
        "nsnnsssssn",
        "nsnssssssn",
        "nssssssssn",
        "nsnnsssssn",
        "nsnnsssssn",
        "nssssssssn",
        "nssssssnnn",
        "nnnnnnnnnn"
    };

    mov:
        while (test < 50) {
            printf("| posição (%d %d) %c |\n", x, y, map[x][y]);
            if(way == 1) { //up
                if(map[x + 1][y] == 's') {
                    x = x + 1;
                } else if(map[x][y - 1] == 's') {
                    y = y - 1;
                    way = 4;
                } else if(map[x][y + 1] == 's') {
                    y = y + 1;
                    way = 3;
                }
            } else if(way == 2) { //down
                if(map[x - 1][y] == 's') {
                    x = x - 1;
                } else if(map[x][y - 1] == 's') {
                    y = y - 1;
                    way = 4;
                } else if(map[x][y + 1] == 's') {
                    y = y + 1;
                    way = 3;
                }
            } else if(way == 3) { //right
                if(map[x][y + 1] == 's') {
                    y = y + 1;
                } else if(map[x + 1][y] == 's') {
                    x = x + 1;
                    way = 1;
                } else if(map[x - 1][y] == 's') {
                    x = x - 1;
                    way = 2;
                }
            } else if(way == 4) { //right
                if(map[x][y - 1] == 's') {
                    y = y - 1;
                } else if(map[x + 1][y] == 's') {
                    x = x + 1;
                    way = 1;
                } else if(map[x - 1][y] == 's') {
                    x = x - 1;
                    way = 2;
                }
            }
            test++;

            goto mov;
        };
    return 0;
}
