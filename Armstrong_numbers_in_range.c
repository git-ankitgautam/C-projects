#include <stdio.h>
int main() 
{
   int  i, temp, rem, sum;
   printf("all 3 digit armstrong numbers are - \n");
   for (i= 100; i<= 999; i++) 
   {
      temp = i;
      sum = 0;
      while (temp != 0) 
      {
        rem = temp % 10;
        sum = sum+(rem*rem*rem);
        temp = temp/10;
      }
      if (sum == i)
      {
         printf("%d\n",i);
         sum = 0;
      }
   }
   return 0;
}