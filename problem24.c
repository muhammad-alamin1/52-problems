// To extract individual elements from the elements of an array
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* const argv[])
{
    unsigned int test_case, arr_of_ele, i;


    printf("Enter your test case number. Range 1 >= CASE <= 100");
    scanf("%u", &test_case);

    printf("Enter how many elements of number.!");
    scanf("%u", &arr_of_ele);

    unsigned int arr[arr_of_ele];

    while(test_case--)
    {
        printf("Enter array elements.");
        for(i = 0; i < arr_of_ele; i++)
        {
            scanf("%u", &arr[i]);
        }

        for(i = 0; i < arr_of_ele; i += 2)
        {
            printf("%u", arr[i]);
        }
    }

    return EXIT_SUCCESS;
}
