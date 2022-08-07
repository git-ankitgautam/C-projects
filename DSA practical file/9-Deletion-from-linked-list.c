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
    
    int elem;
    printf("\nEnter the element you want to delete- ");
    scanf("%d", &elem);

    struct node *ptr =head->next;
    temp =head;
    while(ptr != 0)
    {
        if(head -> data == elem)
        {
            head = head ->next;
            break;
        }
        else if(ptr-> data == elem)
        {
            temp -> next = ptr -> next;
            printf("Element %d deleted", elem);
            break;
        }
        else
        {
            temp = ptr;
            ptr = ptr ->next;
        }
    }

    if(ptr == 0)
    {
        printf("Element not found!");
    }
    printf("\nAfter deletion-");
    printll(head);

    return 0;
}