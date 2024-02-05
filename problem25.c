// LCM
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(int argc, char* const argv[])
{
    int test_case, a, b, multipication, GCD, LCM, SI, temp;

    printf("Enter Your number of test cases.? ");
    scanf("%d", &test_case);

    temp = test_case;

    while(test_case--)
    {
        SI = (test_case - temp) + 1;

        printf("Case No = %d\n", SI);
        printf("Enter Your First Input. ");
        scanf("%d", &a);
        printf("Enter Your Second Input. ");
        scanf("%d", &b);

        multipication = a*b;
        GCD = gcd(a, b);

        LCM = multipication / GCD;
        printf("LCM = %d", LCM);
        temp--;

        printf("\n\n\n");

    }

    return EXIT_SUCCESS;
}

int gcd(int a, int b)
{
    int temp;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}
