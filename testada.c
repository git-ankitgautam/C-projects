

#include <stdio.h>

int main()
{
   int arr[13], mid, N=13, len;
   int row=5;
   if(row == 1)
   {
      for (int i=1; i<N;i++)
      {
         printf("1 ");
      }
   }

   else
   {
      
      mid = (N/2)+1;
      arr[mid-1] = row;
      len = N;
      for(int b=0, c=len-1;b<row;b++, c--)
      {
         arr[b] = b+1;
         arr[c] = b+1;
      }

      len = len - (row*2);

      for(int g=row; g<N-row;g++)
      {
         arr[g] = row;
      }
   

      for(int j=0; j<N;j++)
      {
         printf("%d ", arr[j]);
      }
   }
}