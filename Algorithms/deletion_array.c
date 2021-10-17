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
    int index;
    int array[10] = {0,11,22,33,44,55,66,77,88,99};

    printf("Enter the index where you want to delete element = ");
    scanf("%d", &index);
    for(int i=index;i<9;i++)
    {
        array[i] = array[i+1]; 
    }

    

    printarray(9, array);
    return 0;
}