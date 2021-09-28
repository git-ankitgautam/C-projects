/* Find the unique elements between two lists with 10 elements each */

#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arrf[10], index=0;
    printf("Enter the elements for set 1:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements for set 2:\n");
    for(int j=0;j<10;j++)
    {
        scanf("%d", &arr2[j]);
    }

    for(int k=0; k<10;k++)
    {
        for(int c=0;c<10;c++)
        {
            if(arr1[k] != arr2[c])
            {
                arrf[index] = arr2[c];
                index++;
            }
        }
    }
    
    //int len = sizeof(arrf)/sizeof(arrf[0]);
    printf("unique elements in the sets are:\n");
    for(int b=0;b<index;b++)
    {
        printf("%d\n", arrf[b]);
    }
    return 0;
}