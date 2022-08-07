#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main()
{

    struct node *head=0, *new, *temp;
    int count =0, size;
    printf("Enter the size of list-");
    scanf("%d", &size);
    printf("Enter the data one by one- ");
    while(count <size)
    {
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new -> data);
        new -> next = 0;
        if(head == 0)
        {
            head = new;
            temp = new;
        }

        else
        {
            temp -> next= new;
            temp = new;
        }
        count++;
    }

    struct node* read = head;
    printf("Your list - ");
    while(read !=0)
    {
        printf("%d ", read-> data);
        read = read -> next;
    }

    return 0;
}