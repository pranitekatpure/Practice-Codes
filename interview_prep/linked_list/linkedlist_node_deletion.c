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
	for(int i = 0; i < (pos -2); i++)
	{
		temp = temp->next;		
	}
	
	new_node->next = temp->next;
	temp->next = new_node;
}

void Delete(int pos)
{
	Node_t *temp = head;
	
	if(pos == 1)
	{
		head = temp->next;
		free(temp);
		return;
	}
	
	for(int i = 0; i < (pos - 2); i++)
	{
		temp = temp->next;
	}
	
	Node_t *temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
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

int main()
{
	Insert(1, 1);
	Print();
	Insert(2, 2);
	Print();
	Insert(3, 3);
	Print();
	Insert(4, 4);
	Print();
	Insert(5, 5);
	Print();
	Insert(6, 6);
	Print();
	printf("After Delete: \n");
	Delete(1);
	Print();

	return 0;
}

