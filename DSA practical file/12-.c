#include<stdio.h>
#define MAX 10
void printq(int *q, int f, int r)
{
    while(f != r)
    {
        if(f == MAX-1)
            f = 0;
        printf("%d ",q[f]);
        f++;
    }
    printf("\n");
}

int main()
{
    int size, front=0, rear=-1;
    printf("Enter the intial size of queue-");
    scanf("%d",&size);
    int queue[MAX];
    printf("Enter the elements one by one-");
    while(rear<size-1)
    {
        rear++;
        scanf("%d",&queue[rear]);
    }
    int elem, choice=1;
    while(choice== 1 || choice ==2)
    {    
        printf("Enter your choice - \n1- Insert\n2- Delete or\n3-End\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if(front == rear + 1)
            {
                printf("Overflow");
                break;
            }
            else
            {
                printf("Insert: ");
                scanf("%d",&elem);
                if(front == -1)
                {
                    front =0;
                }
                else if(rear == MAX-1)
                {
                    rear = 0;
                }
                queue[rear] = elem;
                printq(queue,front ,rear);
                break;
            }
        
        case 2:
            if(front == rear)
            {
                printf("Underflow \n");
                break;
            }
            else
            {
                printf("Deleted\n");
                front++;
                printq(queue, front, rear);
                break;
            }
        
        case 3:
            printf("END");
            break;

        default:
            printf("Invalid input!");
            break;
        }

    }    
    return 0;
}