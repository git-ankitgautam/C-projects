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
    int elem,location = 0;
    int array[10] = {7,22,23,37,45,55,56,77,89,412};
    printf("Enter the element you want to search-");
    scanf("%d",&elem);
    int beg, end, mid;
    beg = 0;
    end = 10;
    mid = (beg+end)/2;
    while(beg < end && array[mid] != elem)
    {
        if(elem < array[mid])
        {
            end = mid -1;
        }
        else
        {
            beg = mid+1;
        }

        mid = beg+end/2;
        
    }

    if(array[mid] == elem)
    {
        location = mid;
        printf("Element was found at position %d",location+1);
    }
    else{
        printf("Element not found!");
    }
    return 0;
}