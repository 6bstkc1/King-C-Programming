/*
* 	Random Walk	
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW_NUM 10
#define COL_NUM 10

int main()
{
    char board[ROW_NUM][COL_NUM] = {{'A','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.','.','.'},};

    char c = 'A';
    int x_pos = 0, y_pos = 0, x_inc = 0, y_inc = 0, rand_num, i, j;
    bool pos_tried[4] = {false};
    bool all_true = false;

    srand((int)time(NULL));

    while(c != 'Z') {
        rand_num = rand() % 4;

        if(rand_num == 0)
            y_inc = -1;
        else if(rand_num == 1)
            x_inc = 1;
        else if(rand_num == 2)
            y_inc = 1;
        else
            x_inc = -1;

        if(!pos_tried[rand_num]) {

            pos_tried[rand_num] = true;

            if((x_pos + x_inc >= 0 && x_pos + x_inc < ROW_NUM) && (y_pos + y_inc >= 0 && y_pos + y_inc < COL_NUM) && (board[x_pos + x_inc][y_pos + y_inc] == '.')) {
                board[x_pos + x_inc][y_pos + y_inc] = ++c;
                x_pos += x_inc;
                y_pos += y_inc;

                for(i = 0; i < 4; i++)
                    pos_tried[i] = false;
            }
        }
         else {
                pos_tried[rand_num] = true;
                all_true = false;
                for(i = 0; i < 4; i++) {
                    all_true = pos_tried[i];
                        if(!all_true)
                            break;
                }
                if(all_true) break;
            }
        x_inc = y_inc = 0;
    }

    for(i = 0; i < ROW_NUM; i++) {
        for(j = 0; j < COL_NUM; j++)
            printf("%c ",board[i][j]);
        printf("\n");
    }

    return 0;
}

