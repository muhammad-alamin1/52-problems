/**
    Write a program to find out the total number of words
    by calculating the space between the words in a sentence.

    ## If there are more than one express character between
       two words in this program, but again this program will
       not work.!
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char sen[1001];
    unsigned int i, count = 0;
    bool find_word = false;

    printf("Enter Your String.!\n");
    scanf(" %[^\n]", sen);

    for(i = 0; sen[i] != '\0'; i++)
    {
        if(sen[i] == ' ')
        {
            count++;
            find_word = true;
        }
    }
    count += 1;

    if(!find_word)
        perror("Error! Word Not Found.1");
    else
        printf("Find Word %u", count);

    return 0;
}
