/*
* This program asks the user to enter a numerical grade
* which it will convert to a letter grade.
*/

#include <stdio.h>

int main()
{
    int grade;

    printf("Enter numerical grade:\n"); /* assumes int between 0-100 */
    scanf("%d",&grade);

    grade /= 10;

    switch(grade) {
        case 10: printf("Letter grade: A\n"); break;
        case 9: printf("Letter grade: A\n"); break;
        case 8: printf("Letter grade: B\n"); break;
        case 7: printf("Letter grade: C\n"); break;
        case 6: printf("Letter grade: D\n"); break;
        default: printf("Letter grade: F\n"); break;
    }

    return 0;
}
