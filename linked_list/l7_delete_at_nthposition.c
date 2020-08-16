#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
int create_a_linkedlist(Node_t **head, int n);

void delete_at_nthposition(Node_t **head, int pos)
{
    if(head == NULL || *head == NULL)
        return;

    Node_t *temp1, *temp2;
    if(pos == 1)
    {
        temp1 = (*head)->next;
        free(*head);
        *head = temp1;
        return;
    }
    else
    {
        temp1 = *head;
        for(int i = 0; i < pos - 1; i++)
        {   
            temp2 = temp1;
            temp1 = temp1->next;
            if(temp1 == NULL && (i <= pos - 2))
            {
                printf("\nInvalid posotion selected");
                return;
            }
        }
        temp2->next = temp1->next;
        free(temp1);
    }
}

void print_linkedlist(Node_t *head)
{
    if(head == NULL)
    {
        printf("List is empty.\n");
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
    int n, pos;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);
    Node_t *head = NULL;
    if(create_a_linkedlist(&head, n) == -1) 
        printf("Failed to create list.");

    print_linkedlist(head);
    printf("\nInsert position of element to be deleted: ");
    scanf("%d", &pos);
    delete_at_nthposition(&head, pos);
    printf("\nList after deletion at %dth position...\n", pos);
    print_linkedlist(head);
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