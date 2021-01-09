#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
int create_a_linkedlist(Node_t **head, int n);

void forward_traverse(Node_t **head)
{
    if(*head == NULL)
    {
        return;
    }
    else
    {
        printf("%d->", (*head)->data);
        forward_traverse(&(*head)->next);
    }
}

void reverse_traverse(Node_t **head)
{
    if(*head == NULL)
    {
        return;
    }
    else
    {
        reverse_traverse(&(*head)->next);
        printf("<-%d", (*head)->data);
    }
}

int main()
{
    int n, pos;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);
    Node_t *head = NULL;
    if(create_a_linkedlist(&head, n) == -1) 
        printf("Failed to create list.");

    forward_traverse(&head);
    printf("NULL\n");
    printf("\nNULL");
    reverse_traverse(&head);
    return 0;    
}

int create_a_linkedlist(Node_t **head, int n)
{
    if(head == NULL)
        return -1;
    
    Node_t *newnode, *temp;
    for(int i = 0; i < n; i++)
    {
        if((newnode = (Node_t*)malloc(sizeof(Node_t))) == NULL)
            return -1;

        printf("\nEnter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            temp = *head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }        
    }    
    return 0;
}