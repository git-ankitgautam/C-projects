/*prints a v pattern in the cosole with numbers*/

#include <stdio.h>

int main()
{
    int width = 100;
    for(int i=0,j=201;i<=100;i++,j--)
    {
        for(int a=0;a<=i;a++)
        {
            printf(" ");
        }
            
        printf("%d",i);
        for(int k=0;k<=width*2;k++)
        {
            printf(" ");
        }
        width--;
        printf("%d\n",j);
    }
    return 0;
}