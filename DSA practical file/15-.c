#include<stdio.h>

void printarray(int size, int *arr)
{
    for(int i=0; i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}


int main()
{
    int size;
    printf("Enter the number of elements-");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements one by one-");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Your list-");
    printarray(size,array);

    for(int i=0)

        
    return 0;
}