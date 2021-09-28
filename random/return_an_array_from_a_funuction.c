#include<stdio.h>

int table(int *arr, int a)  //the function receives the pointer as since it is a ptr to an array so it functions like an array
{
    for (int i=1;i<=10;i++)
    {
        arr[i-1] = a*i;
    }

    return arr;  //the ptr to the passed on array is returned
}

int main()
{
    int num, array[10], *ptr;
    scanf("%d", &num);
    //since the return type is pointer so we use a ptr to store its value
    ptr = table(array, num);  //an array is passed on to the function as pointer
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n", num, i, ptr[i-1]); // since its a pointer to the pointer to an array it functions like an array
    }

    return 0;
}