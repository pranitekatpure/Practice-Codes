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
	Node_t *new_node = (Node_t*)malloc(sizeof(Node_t));
	
	new_node->data = data;
	new_node->next = NULL;
	
	if(pos == 1)
	{
		new_node->next = head;
		head = new_node;
		return;
	}
	
	Node_t *temp = head;
	for(int i = 0; i < (pos - 2); i++)
	{
		temp = temp -> next;
	}
	new_node->next = temp->next;
	temp->next = new_node;
}

void Print()
{
	Node_t *temp = head;
	
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void Reverse(Node_t *Curr)
{
	if(Curr == NULL)
		return;
	
	/* Exit condition. */
	if(Curr->next == NULL)
	{
		head = Curr;
		return;
	}
	Reverse(Curr->next);
	
	Node_t *Next = Curr->next;
	Next->next = Curr;
	Curr->next = NULL;
}

int main()
{
	Insert(2,1);
    Print();
    Insert(3,2);
    Print();
    Insert(4,3);
    Print();
    Insert(5,1);
    Print();
    Insert(6,1);
    Print();
	
    Reverse(head);
    printf("Reversed Linked list is: \n");
    Print();
    return 0;	
}
