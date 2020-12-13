/* Merge two sorted linked list into single sortd list.
 * List1: 10-50-70-90-100-NULL
 * List2: 20-30-40-60-80- NULL
 * MergedList: 10-20-30-40-50-60-70-80-90-100-NULL
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
 * Function: Merge Two Lists.
 *---------------------------------------------*/

Node_t* mergesSortedLists(Node_t *head1, Node_t* head2)
{
	Node_t *newNode, *sort_node;
	if(head1 == NULL)
		return head2;
	if(head2 == NULL)
		return head1;
	
	if(head1 != NULL && head2 != NULL)
	{
		if(head1->data <= head2->data)
		{
			sort_node = head1;
			head1 = sort_node->next;
		}
		else
		{
			sort_node = head2;
			head2 =sort_node->next;
		}
	}
	newNode = sort_node;
	
	while(head1 != NULL && head2 != NULL)
	{
		if(head1->data <= head2->data)
		{
			sort_node->next = head1;
			sort_node = head1;
			head1 = sort_node->next;
		}
		else
		{
			sort_node->next = head2;
			sort_node = head2;
			head2 = sort_node->next;
		}
	}
	if(head1 == NULL)
		sort_node->next = head2;
	if(head2 == NULL)
		sort_node->next = head1;
	
	return newNode;
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
	printf("\nMerged list: ");
	print_linkedlist(mergesSortedLists(head1, head2));

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