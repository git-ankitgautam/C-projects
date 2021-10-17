#include<stdio.h>


int main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    int array[size];


    for(int i=0; i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0; i<size;i++)
    {
        printf("%d",array[i]);
    }

    return 0;
}