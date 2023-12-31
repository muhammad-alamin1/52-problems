/**
    Write a program that counts the number of vowels in a words.
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned i, count_vowel = 0;
    bool vowel_found = false;
    char sen[1001];

    printf("Enter your String.\n");
    scanf(" %[^\n]", sen);

    for(i = 0; i < strlen(sen); i++)
    {
       if(sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U' || sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
       {
           count_vowel++;
            vowel_found = true;
       }
    }

    if(!vowel_found)
        perror("Error.! Vowel Not Found.!");
    else
        printf("Vowel Found.! Count = %u", count_vowel);

    return 0;
}
