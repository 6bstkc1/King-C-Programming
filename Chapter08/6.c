/*
* Changes an input string to B1FF Speak.
*/

#include <stdio.h>
#include <ctype.h>

#define N 64

int main()
{
    char ch, sentence[N] = {'\0'};
    int i, len;

    printf("Enter message: ");

    for(len = 0; (sentence[len] = toupper(getchar())) != '\n'; len++)
        ;

    printf("In B1FF-speak: ");
    for(i = 0; i < len; i++) {
        switch(sentence[i]) {
            case 'A' : putchar('4'); break;
            case 'B' : putchar('8'); break;
            case 'E' : putchar('3'); break;
            case 'I' : putchar('1'); break;
            case 'O' : putchar('0'); break;
            case 'S' : putchar('5'); break;
            default: putchar(sentence[i]); break;
        }
    }

    printf("!!!!!!!!!!!");
    return 0;
}


