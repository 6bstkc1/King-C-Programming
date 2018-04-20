/*
* This program reads an array of integers and prints the row sums and column sums.
*/

#include <stdio.h>

int main()
{
    int array[25];
    int row_sums[5] = {0};
    int col_sums[5] = {0};
    int i,j;

    for(i = 0; i < 25; i += 5) {
        printf("Enter row %d: ",(i/5) + 1);
        scanf("%d%d%d%d%d",&array[i],&array[i+1],&array[i+2],&array[i+3],&array[i+4]);

        row_sums[i/5] += array[i] + array[i+1] + array[i+2] + array[i+3] + array[i+4];

        for(j = 0; j < 5; j++)
            col_sums[j] += array[i+j];
    }

    printf("Row totals: %d %d %d %d %d\n",row_sums[0],row_sums[1],row_sums[2],row_sums[3],row_sums[4]);
    printf("Column totals: %d %d %d %d %d\n",col_sums[0],col_sums[1],col_sums[2],col_sums[3],col_sums[4]);

    return 0;
}
