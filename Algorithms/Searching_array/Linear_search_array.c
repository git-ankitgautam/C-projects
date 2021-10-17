#include<stdio.h>

void printarray(int size, int *arr)
{
    for(int i=0; i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}


int main()
{
    int size,elem,location,i=0;
    printf("Enter the size of array =");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements one by one=");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the element you want to search=");
    scanf("%d",&elem);

    while(i<size)
    {
        if(array[i] == elem)
        {
            location = i;
            break;
        }
        i++;
    }
    
    if(i==size)
    {
        printf("element not found");
    }
    else
    {
        printf("the element was found at index - %d", location);
    }
    return 0;
}