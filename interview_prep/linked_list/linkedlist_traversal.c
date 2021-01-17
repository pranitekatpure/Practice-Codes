/* Linked List traversal both Forward Traversal as well as Reverse Traversal */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/*

head -> 1 -> 2  3 -> NULL
             |    |
             new->4
*/
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

/* Function to traverse forward in Linked list using Recursion. */
void forward_traverse(Node_t *head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        printf("%d->", (head)->data);
        forward_traverse((head)->next);
    }
}

/* Function to traverse reverse in Linked list using Recursion. */
void reverse_traverse(Node_t *head)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        reverse_traverse((head)->next);
        printf("<-%d", (head)->data);
    }
}

int main()
{
	Insert(2, 1);
	Print();
	Insert(3, 2);
	Print();
	Insert(4, 3);
	Print();
	Insert(5, 4);
	Print();
	Insert(6, 5);
	Print();
	
    forward_traverse(head);
    printf("NULL\n");
    printf("\nNULL");
    reverse_traverse(head);
    return 0;    
}

