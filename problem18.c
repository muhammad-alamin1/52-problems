/**
    Write a program that print & count vowels & consonants in
    a sentence separately.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    unsigned int i, vowel_count = 0, consonants_count = 0;
    bool found = false;
    char sen[1001];

    printf("Enter Your String.!\n");
    scanf(" %[^\n]", sen);

    for(i = 0; sen[i] != '\0'; i++)
    {
        if(sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U' || sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            printf("%c", sen[i]);
            found = true;
            vowel_count++;
        }

        if(sen[i] != 'A' && sen[i] != 'E' && sen[i] != 'I' && sen[i] != 'O' && sen[i] != 'U' && sen[i] != 'a' && sen[i] != 'e' && sen[i] != 'i' && sen[i] != 'o' && sen[i] != 'u')
        {
            printf("%c", sen[i]);
            found = true;
            consonants_count++;
        }
    }
    printf("\n");

    if(!found)
        perror("Error. Not Found.! Empty String.!");
    else
        printf("Vowel Count Number: %u & Consonants Count Number: %u", vowel_count, consonants_count);


    return 0;
}
