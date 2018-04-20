/*
* This program prompts the user to enter a number and then prints out all the even squares between
* it and 1.
*/

#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i = 2; i * i <= num; i+=2)
        printf("%d\n",i * i);

    return 0;
}
