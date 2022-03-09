#include<stdio.h>
#define MAX 10

void printst(int ptr,int *arr)
{
    printf("Stack - ");
    for(int i=ptr;i>=0;i--){
        printf("%d ",arr[i]);}
    printf("\n");
}

int main()
{
    int size,top=-1;
    printf("Enter the inital size of stack-");
    scanf("%d",&size);
    int stack[MAX];
    printf("Enter the elements one by one- ");
    while(top<size-1)
    {
        top++;
        scanf("%d",&stack[top]);   
    }

    int elem, choice=1;
    while(choice== 1 || choice ==2)
    {    
        printf("Enter your choice :- 1- PUSH 2- POP 3- End\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if(top == MAX-1)
            {
                printf("Overflow\n");
                break;
            }
            else
            {
                printf("PUSH: ");
                scanf("%d",&elem);
                top++;
                stack[top] = elem;
                printst(top,stack);

                break;
            }
        
        case 2:
            if(top == 0)
            {
                printf("Underflow\n");
                top = -1;
                break;
            }
            else
            {
                printf("POP\n");
                top--;
                printst(top,stack);
                break;
            }

        case 3:
            printf("END");
            break;
            
        default:
            printf("Invalid input");
            break;
        }

    }
    return 0;
}