/**
    Write a program that prints the numbers of times sentence contains a particular letter.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    char sentence[10001], letter[2];
    unsigned int count = 0;
    bool is_found = false;

    printf("Enter Your Sentence.\n");
    scanf(" %[^\n]", sentence);
    printf("Enter Your Letter.\n");
    scanf("%s", letter);

    for(int i = 0; i <strlen(sentence); i++)
    {
        if(letter[0] == sentence[i])
        {
            count++;
            is_found = true;
        }
    }

    if(!is_found)
        printf("'%c' is not present.\n", letter[0]);
    else
        printf("Occurrence of '%c' in '%s' = %u", letter[0], sentence, count);

    return 0;
}
