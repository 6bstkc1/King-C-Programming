/*
* This program determines whether or not two words entered into it are anagrams.
*/

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool isAnagram = true;
    char c;
    int i , letters[26] = {0};

    printf("Enter first word: ");
    while((c = getchar()) != '\n')
        if(isalpha(c))
            letters[tolower(c) - 97]++;

    printf("Enter second word: ");
    while((c = getchar()) != '\n')
        if(isalpha(c))
            letters[tolower(c) - 97]--;

    for(i = 0; i < 26; i++)
        if(letters[i]) // letters[i] != 0 non zero is true
            isAnagram = false;

    if(isAnagram)
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");


    return 0;
}
