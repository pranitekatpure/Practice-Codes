#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
int create_a_linkedlist(Node_t **head, int n);
void print_linkedlist(Node_t *head);
// wrong method
bool detect_loop_1(Node_t *head)
{
    Node_t *temp = (Node_t*)malloc(sizeof(Node_t));
    Node_t *nex;
    while(head != NULL)
    {
        if(head->next == temp)
            return true;
        nex = head->next;
        head->next = temp;
        head = nex;
    }
    return false;
}
// floyd's method
bool detect_loop_2(Node_t *head)
{
    Node_t *temp1, *temp2;
    temp1 = temp2 = head;
    while(/* temp1 != NULL && */ temp2 != NULL && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
        if(temp1 == temp2)
            return true;
    }
    return false;
}
int main()
{
    int n, pos;
    n = 5;
    Node_t *head = NULL;
    if(create_a_linkedlist(&head, n) == -1) 
        printf("Failed to create list.");
    head->next->next->next->next->next = head->next->next;
    //floyd's method
    if(detect_loop_2(head))
        printf("\nLoop present.");
    else
        printf("\nNo loop.");
    //wrong method
    // if(detect_loop_1(head))
    //     printf("\nLoop present.");
    // else
    //     printf("\nNo loop.");
    
    // print_linkedlist(head);
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