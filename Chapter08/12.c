/*
* This program prompts the user to enter a word
* and then it prints out the number of points
* the word is worth in scrabble. This version uses an array
*/

#include <ctype.h>
#include <stdio.h>

int main()
{
    int letters[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int points = 0;
    char c;

    printf("Enter a word: ");

    while((c = getchar()) != '\n') {
        c = tolower(c);
        points += letters[c - 97];
    }

    printf("Scrabble value: %d",points);
    return 0;
}
