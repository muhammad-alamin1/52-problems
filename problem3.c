/**
    1000 999 998 997 996
    995  994 993 992 991
    ....................
    ....................

 */

 #include <stdio.h>

 int main(void)
 {
     unsigned int i;

     for(i = 1000; i >= 1; i--)
     {
         printf("%d \t", i);
         if(i%5 == 0)
            printf("\n");
     }

     return 0;
 }
