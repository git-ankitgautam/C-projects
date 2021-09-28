/* express the number as all possible sum of  prime numbers 
*/

#include <stdio.h>

int *prime_check(int N, int *arr, int *ind)
{
    int index = 0, f;
    for (int a = 2; a<= N; a++)
    {
        f=0;
        for(int i=2; i<=(a/2); i++)
        {
            if(a%i==0)
            {
            f=1;
            break;
            }
        } 
        if(f == 0)
        {
            arr[index] = a;
            index++;

        }
    }
    
    *ind = index;
    return arr;
}


int main()
{
    int num;
    printf("Enter an even number >=4:");
    scanf("%d", &num);

    if(num < 4  || num %2 != 0)
    {
        printf("the number should be >=4:");
        printf("\nRe-enter:");
        scanf("%d", &num);
    }

    else
    {
        int in, f=0;
        int *ar;
        int arr[num];
        ar = prime_check(num, arr, &in);
        for(int j=0; j<in; j++)
        {
            for(int k=0; k< in/2;k++)
            {
                if(ar[j] + ar[k] == num)
                {

                    printf("%d = %d + %d\n", num, ar[j], ar[k]);
                    f=1;
                    
                }
            }
        }

        if(f == 0)
        {
            printf("%d can't be expressed as sum of two prime numbers\n", num);
        }    
    
    }
}