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
 * Function: Remove duplicates from unsorted list.
 *---------------------------------------------*/
void remove_duplicate(Node_t *head)
{
    Node_t *curr, *Next, *dup;
	curr = head;
	
	/* Check for list is empty !! and reached to last node. */
	while(curr != NULL && curr->next != NULL)
	{
		Next = curr;
		while(Next->next != NULL)
		{
			/* Check if there is duplicate. If yes, delete it. */
			if(curr->data == Next->next->data)
			{
				dup = Next->next;
				Next->next = Next->next->next;
				free(dup);
			}
			else
			{
				Next = Next->next;
			}
		}
		curr = curr->next;
	}
}
/*----------------------------------------------*/
int main()
{
    Insert(2, 1);
	Print();
	Insert(5, 2);
	Print();
	Insert(4, 3);
	Print();
	Insert(5, 4);
	Print();
	Insert(5, 5);
	Print();
    remove_duplicate(head);
	printf("List after removal of duplicates: \n");
	Print();
        
    return 0;    
}
