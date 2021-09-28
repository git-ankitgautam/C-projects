/* find out each leap year between y1 and y2,  which contains the number x.*/ 


#include <stdio.h>

int main()
{
    int x, y1, y2;
    int arr[200], final[100];
    printf("Enter the value of x:- ");
    scanf("%d", &x);

    printf("Enter the value of y1 and y2:- ");
    scanf("%d %d", &y1, &y2);

    int index=0;
    for(int year=y1; year<=y2;year++)
    {
        if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
        {
            arr[index] = year;
            index++;
        }
    } 


    int temp, rem,in=0;
    for (int j=0;j<index;j++)
    { 
        temp = arr[j];
        while (temp != 0) 
        {
            rem = temp % 10;
            if(rem == x)
            {
                final[in] = arr[j];
                in++;
            }
            temp /= 10;
        }
    }

    for(int h=0;h<in;h++)
    {
        printf("%d\n", final[h]);
    }

    return 0;
}