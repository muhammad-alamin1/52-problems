/**
    Write a program that reverse all the words in a
    sentence.
*/

#include <stdio.h>
#include <stdlib.h>

void reverse(char str[]);

int main(void)
{
    char str[1001];

    printf("Enter String: ");
    scanf(" %[^\n]", str);

    reverse(str);


    return 0;
}

// reverse string func
void reverse(char str[])
{
    unsigned int i;
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
