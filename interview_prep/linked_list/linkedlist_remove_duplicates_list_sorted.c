/* For example if the linked list is 12->11->12->21->41->43->21 
 * then removeDuplicates() should convert the list to 12->11->21->41->43. 
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


void Insert(int data, int pos)
{
	/* Create New Node */
	Node_t *new_node = (Node_t*)malloc(sizeof(Node_t));
	new_node->data = data;
	new_node->next = NULL;
	
	/* Case when position to insert is 1. */
	if(pos == 1)
	{
		new_node->next == head;
		head = new_node;
		return;
	}
	
	Node_t *temp = head;
	for(int i = 0; i < (pos - 2); i++)
		temp = temp->next;
	
	new_node->next = temp->next;
	temp->next = new_node;
}


void Print()
{
	Node_t *temp = head;
	while(temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


/*----------------------------------------------
 * Function: Remove duplicates from sorted list.
 *---------------------------------------------*/
void remove_duplicate(Node_t *head)
{
    Node_t *curr = head;
	Node_t *Next;
	
	/* List is empty */
	if(curr == NULL)
		return;
	
	while(curr->next != NULL)
	{
		if(curr->data == curr->next->data)
		{
			Next = curr->next->next;
			free(curr->next);
			curr->next = Next;
		}
		else /* This is tricky: only advance if no deletion */
		{
			curr = curr->next;
		}
	}
}

/*----------------------------------------------*/
int main()
{
    Insert(1, 1);
	Print();
	Insert(2, 2);
	Print();
	Insert(3, 3);
	Print();
	Insert(3, 4);
	Print();
	Insert(4, 5);
	Print();
    remove_duplicate(head);
	printf("List after removal of duplicates: \n");
	Print();
        
    return 0;    
}
