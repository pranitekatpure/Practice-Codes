#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;

void insert_at_beginning(Node_t **head)
{
    if(head == NULL)
        return;

    Node_t *newnode, *temp;
    if((newnode = (Node_t*)malloc(sizeof(Node_t))) == NULL)
        return;

    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        temp = *head;
        *head = newnode;
        newnode->next = temp;
    }  
}

void print_linkedlist(Node_t *head)
{
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    printf("Elements of list are: ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    int n;
    printf("Insert number of elements to be inserted at the beginning of the list: ");
    scanf("%d", &n);
    Node_t *head = NULL;
    for(int i = 0; i < n; i++)
        insert_at_beginning(&head);
    print_linkedlist(head);
    return 0;
}