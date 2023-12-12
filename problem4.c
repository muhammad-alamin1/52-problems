/**
    Find all the factors (divisor) of a number.!

    Case T <= 10
    Number N <= 100000

    output like!

    3   Case 1: 1 2 3
    6   Case 2: 1 3 6 15
    .....................
    .....................
*/
#include <stdio.h>

int main(void)
{
    int T, i, j, N;

    printf("Enter Case T: ");
    scanf("%d", &T);
    system("cls");

    for(i = 1; i <= T; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &N);
        printf("Case %d:", i);

        for(j = 1; j <= N; j++)
        {
            if(N % j == 0)
                printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}
