#include <stdio.h>

void fibonacci (int n)
{
    int sum=0;
    int t1=0, t2=1;
    printf("%d %d",t1,t2);
    for (int i=3; i<=n; i++)
    {
        sum = t1+t2;
        printf(" %d ",sum);
        t1=t2;
        t2=sum;
    }

}

int main()
{
    int n;
    printf("Enter the number of temrs:");
    scanf("%d",&n);
    fibonacci(n);

    return 0;
}