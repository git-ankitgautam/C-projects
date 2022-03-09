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
    int size,elem,location = 0,j,temp;
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

    //bubble sort for making the array sorted to be able to use binary search
    for(int i=0;i<size;i++)
    {
        j = 0;
        while(j <=size - i)
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            j++;
        }
        
    }
    printf("sorted array:-");
    printarray(size, array);
    
    int beg, end, mid;
    beg = 0;
    end = size;
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
        printf("\nElement was found at position %d",location+1);
    }
    else{
        printf("\nElement not found!");
    }
    return 0;
}