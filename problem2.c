/**
    Even or odd
    * A number max digit 100;
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int T = 1;
    char n[101];
    unsigned int i;
    bool is_even = false;

    // printf("Enter T: ");
    // scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        printf("Enter Value: ");
        scanf("%s", &n);
        if(atoi(n)%2 == 0)
            is_even = true;
        else
            is_even = false;
    }

    if(is_even)
        printf("Even Number.!");
    else
        printf("Odd Number.!");

    return 0;
}

