#include<stdio.h>
#include<ctype.h>
#define MAX 10

int main()
{
    char *ptr,exp[50];
    float val, number[100];
    printf("Enter the Expression-");
    gets(exp);
    int stack[MAX], top=-1, num,B,A;
    ptr = exp;
    while(*ptr != "\0")
    {
        if(isdigit(*ptr))
        {
            
           stack[++top] = num;
        }
        
        else
        {
            A= stack[top--];
            B= stack[top--];
            switch(*ptr)
            {
            case '+':
                stack[++top] = B + A;
                break;
            case '-':
                stack[++top] = B - A;
                break;
            case '*':
                stack[++top] = B * A;
                break;
            case '/':
                stack[++top] = B / A;
                break;
            }
        }
        ptr++;
    }

    printf("The value of expression %s  =  %d\n",exp,stack[top]);
    return 0;
}