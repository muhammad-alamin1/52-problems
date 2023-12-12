/**
    Factorial Problem
    T <= 100
    0 <= N >= 15
*/
#include <stdio.h>

int main(void)
{
    short int i, j;
    unsigned int T, N;
    long long int factorial = 1;

    printf("How many times do you want to run the condition. ");
    scanf("%u", &T);

    for(j = 0; j < T; j++)
    {
        printf("Enter do you want to the factorial of the number.! ");
        scanf("%u", &N);

        for(i = 2; i <= N; i++) factorial *= i;
        printf("%u number of factorial %.2lld\n", N, factorial);
        factorial = 1;
    }


    return 0;
}

