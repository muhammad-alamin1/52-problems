/**
    Sorting Smallest to large !

    4 2 0 3     ---> 0 2 3 4
    ........................
    ........................

 */
 #include <stdio.h>
// Error Program
 int main(void)
 {
     int num[4] = {4, 1, 5, 0};
     unsigned int i;

     for(i = 0; i <= 3; i++)
     {
        if(num[i] >= num[i+1])
        {
            int temp = num[i];
            num[i] = num[i+1];
            num[i+1] = temp;
        }
     }

    for(i = 0; i <= 3; i++) printf("%d ", num[i]);

     return 0;
 }

