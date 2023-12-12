/**
    Write a program to find the sum of first & last digits of a five
    digit number.

    Example like:

    12345 Sum = 6
    67893 Sum = 9
    .............
    .............
*/

#include <stdio.h>

int main(void)
{
    int num, LSD, MSD, sum = 0;

    printf("Enter number: (Length between 1 to 5) ");
    scanf("%d", &num);

    // check the input exactly five digit
    if(num < 10000 || num > 99999)
    {
        perror("Invalid Input! Please Enter valid 5 digit number.!\n");
        return 1;
    }

    LSD = num % 10;
    MSD = num / 10000;
    sum = LSD + MSD;

    printf("sum of first & last digit %d\n", sum);

    /**
        Using loop

        while(num >= 10) num /= 10;
        MSD = num;

    */

    return 0;
}
