/**
    Write a program that reverse the word.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int T;
    char str[1001];

    printf("How many times will the loop turn?");
    scanf("%d", &T);

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
