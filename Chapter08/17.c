/*
*	Creates a Magic Square 
*/
#include <stdio.h>

int main()
{
    int n, i, j, num, array[99][99] = {0};

    printf("This program creates a magic square of a specified area.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d",&n);

    i = 0;
    j = n / 2;

   for(num = 1; num <= n * n;) {
    if(i == -1 && j == n) {
        i = 0;
        j = n - 2;
    }
    else {
        if( j >= n)
            j = 0;
        else
            j = (j + n) % n;
        if(i < 0)
            i = n - 1;
        else
            i = (i + n) % n;
    }
    if(array[i][j]) {
        i+=2;
        j--;
        continue;
    }
    else
        array[i][j] = num++;
    i--; j++;
   }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%5d",array[i][j]);
        printf("\n");
    }

    return 0;
}
