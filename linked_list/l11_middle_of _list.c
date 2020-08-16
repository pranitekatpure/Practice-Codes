#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
int create_a_linkedlist(Node_t **head, int n);
void print_linkedlist(Node_t *head);

//Method 1
void print_middle_1(Node_t **head)
{
    Node_t *temp1, *temp2;
    temp1 = temp2 = *head;

    if(head == NULL || *head == NULL)
        return;

    while(temp2->next != NULL && temp2->next->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }
    printf("\nMiddle of list is_1: %d", temp1->data);
}

//Method 2
void print_middle_2(Node_t **head)
{
    Node_t *temp1, *temp2;
    temp1 = temp2 = *head;
    int count = 1;
    
    if(head == NULL || *head == NULL)
        return;

    while(temp1 != NULL)
    {
        if(count & 1)
            temp2 = temp2->next;
        count++;
        temp1 = temp1->next;
    }
    if(temp2 != NULL)
        printf("\nMiddle of list is_2: %d", temp2->data);
}

int main()
{
    int n, pos;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);
    Node_t *head = NULL;
    if(create_a_linkedlist(&head, n) == -1) 
        printf("Failed to create list.");

    print_middle_1(&head);
    print_middle_2(&head);
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