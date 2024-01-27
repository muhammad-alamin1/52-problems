// Extraction ASCII values from alphabets
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    char str[101];
    unsigned int i, test_case;

    printf("Enter test case.\n");
    scanf("%u", &test_case);

    while(test_case--)
    {
        printf("Enter Your UPPERCASE String.!\n");
        scanf(" %[^\n]", str);

        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            for(i = 0; str[i] != '\0'; i++)
                printf("%d", str[i] - 64);
        }
        else
            perror("ERROR! Enter Wrong String.!");
        printf("\n");
    }

    return EXIT_SUCCESS;
}
