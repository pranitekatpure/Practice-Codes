/* For example if the linked list is 11->12->13->14->15->16->17 
 * then remove_odd_pos() should convert the list to 12->14->16->60
 * and returns new head 
 */ 

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
Node_t *head = NULL;

int create_a_linkedlist(int n);
void print_linkedlist(Node_t *head);
/*----------------------------------------------
 * Function: Remove odd positions from the list.
 *---------------------------------------------*/
void remove_odd_pos(Node_t *lHead)
{
	Node_t *newHead, *temp, *odd;
	
	if(head == NULL)
		return;
	
	newHead = lHead->next;
	free(lHead);
	temp = newHead; 
	while(temp != NULL && temp->next != NULL)
	{
		odd = temp->next;
		temp->next = temp->next->next;
		temp = temp->next;
		free(odd);
	}
	head = newHead;
	// return newHead;
}

/*----------------------------------------------
 * Function: Remove even positions from the list.
 *---------------------------------------------*/
void remove_even_pos(Node_t *head)
{
	Node_t *even, *temp;
	temp = head;
	while(temp != NULL && temp->next != NULL)
	{
		even = temp->next;
		temp->next = temp->next->next;
		temp = temp->next;
		free(even);
	}
}
/*----------------------------------------------*/
int main()
{
    int n;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);

    if(create_a_linkedlist(n) == -1) 
        printf("Failed to create list.");

    print_linkedlist(head);
    //remove_odd_pos(head);
    remove_even_pos(head);
	print_linkedlist(head);    
    return 0;    
}

int create_a_linkedlist(int n)
{   
    Node_t *newnode, *temp;
    for(int i = 0; i < n; i++)
    {
		newnode = (Node_t*)malloc(sizeof(Node_t));

        printf("\nEnter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
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