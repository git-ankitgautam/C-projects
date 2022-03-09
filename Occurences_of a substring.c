#include <stdio.h>
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
void main()
{
    int j, l, l1=0, l2=0;
 
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        l1++;
    }
 
    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);
 
    for (int i = 0; sub[i] != '\0'; i++)
    {
        l2++;
    }
 
 
    for (int i = 0; i < l1;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}