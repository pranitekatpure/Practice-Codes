/* Merge two sorted linked list into single list alternately.
 * List1: 10-50-70-90-100-NULL
 * List2: 20-30-40-60-80- NULL
 * MergedList: 10-20-50-30-70-40-90-60-100-80-NULL
 */ 

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
Node_t *head1 = NULL;
Node_t *head2 = NULL;

int create_a_linkedlist1(int n);
int create_a_linkedlist2(int n);
void print_linkedlist(Node_t *head);
/*----------------------------------------------
 * Function: Merge Two Lists alternately.
 *---------------------------------------------*/

void mergesListsAlternately(Node_t *head1, Node_t *head2)
{
	Node_t *tail, *l1, *l2;
	tail = head1;
	l1 = tail->next;
	l2 = head2;

	while(l1 != NULL && l2 != NULL)
	{
		tail->next = l2;
		tail = tail->next;
		l2 = l2->next;
		tail->next = l1;
		tail = tail->next;
		l1 = l1->next;
	}
	if(l1 == NULL)
		tail->next = l2;
	if(l2 == NULL)
		tail->next = l1;
}
/*----------------------------------------------*/
int main()
{
    int n;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);
    if(create_a_linkedlist1(n) == -1) 
        printf("Failed to create list.");

    scanf("%d", &n);
    if(create_a_linkedlist2(n) == -1) 
        printf("Failed to create list.");
	
	printf("\nFirst list: ");
    print_linkedlist(head1);
	printf("\nSecond list: ");
	print_linkedlist(head2);
	mergesListsAlternately(head1, head2);
	printf("\nMerged list: ");
	print_linkedlist(head1);

    return 0;    
}

int create_a_linkedlist1(int n)
{   
    Node_t *newnode, *temp;
    for(int i = 0; i < n; i++)
    {
		newnode = (Node_t*)malloc(sizeof(Node_t));

        printf("\nEnter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head1 == NULL)
        {
            head1 = newnode;
        }
        else
        {
            temp = head1;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }        
    }    
    return 0;
}

int create_a_linkedlist2(int n)
{   
    Node_t *newnode, *temp;
    for(int i = 0; i < n; i++)
    {
		newnode = (Node_t*)malloc(sizeof(Node_t));

        printf("\nEnter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head2 == NULL)
        {
            head2 = newnode;
        }
        else
        {
            temp = head2;
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
        printf("\nList is empty.");
        return;
    }
	Node_t *temp = head;
    printf("\nElements of list are: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }    
}