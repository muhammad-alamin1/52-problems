/**
    Factorial Problem
    T <= 100
    0 <= N <= 100
*/
#include <stdio.h>

int main(void)
{
    short int i, j;
    unsigned int T, N, mod, zero_count = 0;
    long long int factorial = 1;

    printf("How many times do you want to run the condition. ");
    scanf("%u", &T);

    for(j = 0; j < T; j++)
    {
        printf("Enter do you want to the factorial of the number.! ");
        scanf("%u", &N);

        for(i = 2; i <= N; i++) factorial *= i;
        printf("%u number of factorial %.2lld\n", N, factorial);

        // counting 0,
        while(factorial > 0)
        {
            mod = factorial % 10;
            if(mod == 0) zero_count ++;
            else break;
            factorial /= 10;
        }
        printf("%.2lld number of counting zero %u\n", factorial, zero_count);

        zero_count = 0;
        factorial = 1;
    }


    return 0;
}
