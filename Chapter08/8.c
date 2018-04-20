/*
* This program is a modification of the previous one. It finds the total score and average score per student and
* total, average, lowest and highest scores from all the quizzes.
*/

#include <stdio.h>

int main()
{
    int array[25];
    int i;
    int lowest = 2147483647;
    int highest = 0;
    int total = 0;

    for(i = 0; i < 25; i += 5) {
        printf("Enter Student %d scores: ",(i/5) + 1);
        scanf("%d%d%d%d%d",&array[i],&array[i+1],&array[i+2],&array[i+3],&array[i+4]);
    }

    // Average and total score for each student
    for(i = 0; i < 26; i++) {
        if(i/5 > 0 && i % 5 == 0) {
            printf("Student %d Total quiz score: %d\n",(i/5),total);
            printf("Student %d Average quiz score %d\n",(i/5),total/5);
            total = 0;
        }
        if(i > 25) break;
        total += array[i];
    }

    // Average, Total, High and Low scores out of all quizzes
    for(i = 0; i < 25; i++) {
        if(array[i] < lowest)
            lowest = array[i];
        if(array[i] > highest)
            highest = array[i];
        total += array[i];
    }

    printf("Total quiz score: %d\n",total);
    printf("Average quiz score: %d\n",total/5);
    printf("Lowest score: %d\n",lowest);
    printf("Highest score: %d\n",highest);

    return 0;
}
