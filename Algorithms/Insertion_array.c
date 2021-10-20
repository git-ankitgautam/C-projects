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
    
    int array[11] = {0,11,22,33,44,55,66,77,88,99};
    int elem, size, index ;

    printf("Enter the element you want to insert = ");
    scanf("%d", &elem);

    printf("Enter the index where you want to insert element = ");
    scanf("%d", &index);
    
    
    for(int i=9;i>=index;i--)
    {
        array[i+1] = array[i]; 
    }
    array[index] = elem;
    

    printarray(11, array);
    return 0;
}