/*
* Encrypts a message with the Caeser Cipher
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch,message[80];
    int shift_amount, message_length = 0, i = 0;

    printf("Enter a message to be encrypted: ");

    while((ch = getchar()) != '\n') {
        message[i] = ch;
        i = ++message_length;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d",&shift_amount);

    printf("Encrypted message: ");

    for(i = 0; i < message_length; i++) {
        if(message[i] >= 'A' && message[i] <= 'Z')
            printf("%c",((message[i] - 'A')+ shift_amount) % 26 + 'A');
        else if(message[i] >= 'a' && message[i] <= 'z')
            printf("%c",((message[i] - 'a')+ shift_amount) % 26 + 'a');
        else
            printf("%c",message[i]);
    }

    return 0;
}
