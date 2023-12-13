/**
    Write a program to print the number of occurrences of all
    letters in a sentence.
*/

#include <stdio.h>

int main(void)
{
    char sentence[1001];
    unsigned int count[26], i;

    printf("Enter Your Sentence.\n");
    scanf(" %[^\n]", sentence); // Regular Expression check the line space

    // set all array elements 0
    for(i = 0; i < 26; i++) count[i] = 0;

    for(i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i] >= 'a' && sentence[i] <= 'z')
            count[sentence[i] - 'a']++;
    }

    // print output
    for(i = 0; i < 26; i++)
    {
        if(count[i] != 0)
            printf("%c = %d\n", 'a' + i, count[i]);
    }

    return 0;
}
