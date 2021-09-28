/* print the given pattern, with scalability available
1 1 1 1 1 1 1 1 1
1 2 2 2 2 2 2 2 1
1 2 3 3 3 3 3 2 1
1 2 3 4 4 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 4 4 3 2 1
1 2 3 3 3 3 3 2 1
1 2 2 2 2 2 2 2 1
1 1 1 1 1 1 1 1 1
*/

#include <stdio.h>
int pattern(int row, int N, int *arr);
int rev_pattern(int row, int N, int *rev_arr, int half);

int main()
{
    system("cls");
    int N;

    printf("Enter the value of N:- ");
    scanf("%d",&N);
    int *ptr, *rev_ptr;
    int array[N], rev_array[N],half = (N/2)+1;

    for(int i=1; i<=N;i++)
    {
        if(i <= half)
        {
            ptr = pattern(i, N, array);
            for(int j=0;j<=N-1;j++)
            {
            
                printf("%d ",ptr[j]);
            }
        }

        else if(i > half)
        {
            rev_ptr = rev_pattern(i, N, rev_array, half);
            for(int k=0;k<=N-1;k++)
            {
                printf("%d ",rev_ptr[k]);
            }
        }
        printf("\n");
    }
}

int pattern(int row, int N, int *arr)
{
    int mid, len;
    if(row == 1)
    {
        for(int h=0; h<=N;h++)
        {
            arr[h] = 1;
        }
    }
    
    else
    {
        mid = (N/2)+1;
        arr[mid-1] = row;
        len = N;
        for(int b=0, c=len-1;b<row;b++, c--)
        {
            arr[b] = b+1;
            arr[c] = b+1;
        }

        for(int g=row; g<N-row;g++)
        {
            arr[g] = row;
        }
    }

    return arr;
}

int rev_pattern(int row, int N, int *rev_arr, int half)
{
    int mid, len, diff;
    diff = row - half;
    row -=(2*diff);
    if(row == 1)
    {
        for(int h=0; h<=N;h++)
        {
            rev_arr[h] = 1;
        }
    }
    
    else
    {
        mid = (N/2)+1;
        rev_arr[mid-1] = row;
        len = N;

        // b and c are just throwaway variables used to insert the value from 1 to row from both sides
        for(int b=0, c=len-1;b<row;b++, c--)
        {
            rev_arr[b] = b+1;
            rev_arr[c] = b+1;
        }

        //inserting the value of middle elements correspoding to row
        for(int g=row; g<N-row;g++)
        {
            rev_arr[g] = row;
        }
    }

    return rev_arr;
}

