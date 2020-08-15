#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
int create_a_linkedlist(Node_t **head, int n);

void insert_at_nthposition(Node_t **head, int pos)
{
    if(head == NULL && *head == NULL)
        return;

    Node_t *temp1 = *head;
    Node_t *newnode, *temp2;
    newnode = (Node_t*)malloc(sizeof(Node_t));
    printf("Enter %dth element: ", pos);
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(pos == 1)
    {
        *head = newnode;
        newnode->next = temp1;
    }
    else
    {
        for(int i = 0; i < pos - 1; i++)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            if(temp1 == NULL && (i < pos - 2))
            {
                printf("\nOut of list size");
                return;
            }
        }
        temp2->next = newnode;
        newnode->next = temp1;
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
    printf("\nEnter position to which element to be inserted: ");
    scanf("%d", &pos);
    insert_at_nthposition(&head, pos);
    printf("\nList after inserting at %dth position:\n", pos);
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