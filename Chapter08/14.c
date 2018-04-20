#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sentence[64];
    char c, last_c;
    int i , j, word_length = 0;

    printf("Enter a sentence: ");

    for(i = 0, c = getchar(); c != '.' && c != '?' && c != '!'; c = getchar(), i++)
        sentence[i] = c;

    last_c = c;

    for(j = i - 1; j >= 0; j--) {
        if(sentence[j] == ' ') {
            for(i = j+1; i < word_length + j + 1; i++) {
                printf("%c",sentence[i]);
            }
            printf(" ");
            word_length = 0;
        }
       else
            word_length++;
    }

    for(i = 0; i < word_length; i++) // last word
        printf("%c",sentence[i]);

    printf("%c",last_c);

    return 0;
}
