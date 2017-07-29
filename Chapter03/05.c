/*
* This program prompts the user to enter numbers 1-16 then adds rows, columns and diagonals.
*/

#include <stdio.h>

int main()
{
    int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen;
    int row1, row2, row3, row4, col1, col2, col3, col4, diag1, diag2;

    printf("Enter the numbers from one to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&one,&two,&three,&four,&five,&six,&seven,&eight,&nine,&ten,&eleven,&twelve,&thirteen,&fourteen,&fifteen,&sixteen);

    row1 = one + two + three + four; /* rows */
    row2 = five + six + seven + eight;
    row3 = nine + ten + eleven + twelve;
    row4 = thirteen + fourteen + fifteen + sixteen;

    col1 = one + five + nine + thirteen; /* columns */
    col2 = two + six + ten + fourteen;
    col3 = three + seven + eleven + fifteen;
    col4 = four + eight + twelve + sixteen;

    diag1 = one + six + eleven + sixteen; /* diag */
    diag2 = four + seven + ten + thirteen;

    printf("%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n\n",one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifteen,sixteen);
    printf("Row sums: %d %d %d %d\nColumn sums: %d %d %d %d\nDiagonal sums: %d %d\n",row1,row2,row3,row4,col1,col2,col3,col4,diag1,diag2);

    return 0;
}
