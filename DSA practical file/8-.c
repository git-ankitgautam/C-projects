#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void printll(struct node* head)
{
    struct node* read = head;

    while(read !=0)
    {
        printf("%d ", read-> data);
        read = read -> next;
    }
}

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
    printf("Your list - ");
    printll(head);
    
    int elem,index;
    printf("\nEnter the element you want to insert- ");
    scanf("%d", &elem);

    printf("Enter the index you want to insert the element-");
    scanf("%d", &index);

    struct node* ptr = head;
    new = (struct node *)malloc(sizeof(struct node));
    new -> data = elem;
    if(index == 0)
    {
        new -> next = head;
        head = new;
    }
    else
    {
        count=1;
        while(count<index)
        {
            ptr = ptr -> next;
            count++;
        }
        temp = ptr -> next;
        ptr -> next = new;
        new -> next = temp;
    }
    printf("Your list after insertion- ");
    printll(head);

    return 0;
}