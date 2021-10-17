#include <stdio.h>
#include<stdlib.h>

int main()
{
    struct node 
    {
        int data;
        struct node *next;
    }n1;

    struct node *head, *new;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter data-");
    scanf("%d", &new -> data);
    printf("%d",n1.data);
}