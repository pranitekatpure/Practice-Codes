#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;    
};

typedef struct Node Node_t;
void _node_of_intersection(int d, Node_t *head1, Node_t *head2);

int count_list(Node_t *head)
{
    if(head == NULL)
        return 0;
    Node_t *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }   
    return count;
}

void node_of_intersection(Node_t *head1, Node_t *head2)
{
    if(head1 == NULL || head2 == NULL)
        return;
    int l1, l2, d;
    l1 = count_list(head1);
    l2 = count_list(head2);
    
    if(l1 > l2)
    {
        d = l1 - l2;
        _node_of_intersection(d, head1, head2);
    }
    else
    {
        d = l2 - l1;
        _node_of_intersection(d, head2, head1);
    }    
}

void _node_of_intersection(int d, Node_t *head1, Node_t *head2)
{
    Node_t *temp1 = head1;
    Node_t *temp2 = head2;
    for(int i = 0; i < d; i++)
    {
        if(temp1 == NULL)
            return;
        temp1 = temp1->next;
    }
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1 == temp2)
            break;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    printf("Node of intersection is: %d", temp1->data);
}

int node_of_intersection_mn(Node_t *head1, Node_t *head2)
{
    if(head1 == NULL || head2 == NULL)
        return -1;
    Node_t *temp1 = head1;
    Node_t *temp2 = head2;
    while(temp1 != NULL)
    {
        while(temp2 != NULL)
        {
            if(temp1->data == temp2->data)
                return temp1->data;
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
        temp2 = head2;
    }
    return -1;
}

int main() 
{ 
    Node_t *newNode; 
    Node_t *head1 = (struct Node*)malloc(sizeof(struct Node)); 
    head1->data = 10; 
  
    Node_t *head2 = (struct Node*)malloc(sizeof(struct Node)); 
    head2->data = 3; 
  
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 

    node_of_intersection(head1, head2); 
    printf("\nNode of intersection by m*n is: %d", node_of_intersection_mn(head1, head2));
    return 0; 
} 