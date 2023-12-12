/**
    Draw Square
    output like

    *****
    *****
    *****
    *****
    *****
*/

#include <stdio.h>

int main(void)
{
    unsigned int i, j;
    int n;

    printf("Enter Number you want to draw. !");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++) printf("*");
        printf("\n");
    }

    return 0;
}
