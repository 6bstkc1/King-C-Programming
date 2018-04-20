/*
* This program prompts the user to enter a word
* and then it prints out the number of points
* the word is worth in scrabble.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int points = 0;
    char c;

    printf("Enter a word: ");

    while((c = getchar()) != '\n') {
        c = tolower(c);
        switch(c) {
            case 'a': case 'e': case 'i': case 'l': case 'n': case 'o': case 'r': case 's': case 't': case 'u': points += 1;  break;
            case 'd': case 'g': points += 2; break;
            case 'b': case 'c': case 'm': case 'p': points += 3; break;
            case 'f': case 'h': case 'v': case 'w': case 'y': points += 4; break;
            case 'k': points += 5; break;
            case 'j': case 'x': points += 8; break;
            case 'q': case 'z': points += 10; break;
        }
    }

    printf("Scrabble value: %d",points);
    return 0;
}
