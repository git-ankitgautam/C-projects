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
    int size, index, temp=0,j;
    printf("Enter the size of array =");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements one by one=");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Unsorted array - ");
    printarray(size, array);

    //bubble sort

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


    printf("sorted array - ");
    printarray(size, array);
    
    return 0;
}