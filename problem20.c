/**
    Write a program to find the total number of words
    in a sentence. The two terms can contain any sign.
    That is, there can be commas, semicolons etc. In
    addition two space characters between two words.!
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char *word;
    char sen[1001];
    unsigned int i, count = 0;
    bool find_word = false;

    printf("Enter Your String.!\n");
    scanf(" %[^\n]", sen);

    word = strtok(sen, ",!;?. ");
    while(word != NULL)
    {
        if(strlen(word) > 0)
        {
            count++;
            find_word = true;
        }
        word = strtok(NULL, ",!;?. ");
    }

    if(!find_word)
        perror("Error! Word Not Found.!");
    else
        printf("Find Words %u", count);

    return 0;
}
