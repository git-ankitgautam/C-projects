#include<stdio.h>
 
int Fibonacci(int num)
{
    if ( num == 0 )
        return 0;
    else if ( num == 1 )
        return 1;
    else
        return ( Fibonacci(num-1) + Fibonacci(num-2));
}
 
int main()
{
    int n,i=0;
    printf("Enter the value of n for series-");
    scanf("%d",&n);
    printf("Fibonacci series-");
    for (int c=0;c<n;c++,i++)
    {
        printf("%d ", Fibonacci(i));
    }

    return 0;
}