/**
    Even or odd
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int T = 1, n;
    unsigned int i;
    bool is_even = false;

    // printf("Enter T: ");
    // scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        printf("Enter Value: ");
        scanf("%d", &n);
        if(n%2 == 0)
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
