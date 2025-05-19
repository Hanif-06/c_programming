#include <stdio.h>
 int main ()
 {
     int a;
     printf("Enter a number:");
     scanf("%d",&a);
     if(a%2==0)
     {
         if(a%5==0)
         {
             printf("%d is an even number and divisible by 5",a);
         }
         else
         {
             printf("%d is an even number but not divisible by 5",a);
         }
     }
     else if (a%2!=0)
     {
         if(a%5==0)
         {
             printf("%d is an odd number and divisible by 5",a);
         }
         else
         {
             printf("%d is an odd number but not divisible by 5",a);
         }
     }
     return 0;
 }
