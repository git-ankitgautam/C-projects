#include<stdio.h>

int main()
{
    int array[50], elem, size, index;
    printf("Enter the size of array(<50)- ");
    scanf("%d",&size);

    printf("Enter the elements one by one-");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Enter the index where you want to delete element = ");
    scanf("%d", &index);
    if(index > size)
    {
        printf("index out fo range:-");
    }
    else{

    for(int i=index;i<9;i++)
    {
        array[i] = array[i+1]; 
    }

    size -= 1;
    printf("Updated array- ");    
    for(int i=0; i<size;i++)
    {
        printf("%d ",array[i]);
    }
    }
    return 0;
}