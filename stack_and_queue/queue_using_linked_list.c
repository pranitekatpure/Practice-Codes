#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node Node_t;
Node_t *front = NULL;
Node_t *rear = NULL;

void enqueue(int val)
{
	Node_t *temp = (Node_t*)malloc(sizeof(Node_t));
	if(temp == NULL)
	{
		printf("ERROR: unable to allocate memory\n");
		return;
	}
	
	temp->data = val;
	temp->next = NULL;
	
	if(front == NULL && rear == NULL)
	{
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

void dequeue(void)
{
	Node_t *temp = front;
	if(front == NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}		
	free(temp);
}

void Front(void)
{
	if(front != NULL)
		printf("Front is: %d\n", front->data);
	else
		printf("Queue is empty\n");
}

void Print(void)
{
	printf("Queue: ");
	if(front == NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	Node_t *temp = front;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	dequeue();
	Front();
	Print();
	enqueue(1);
	Print();
	enqueue(2);
	Print();
	enqueue(3);
	Print();
	enqueue(4);
	Print();
	Front();
	enqueue(5);
	Print();
	enqueue(6);
	Print();
	enqueue(7);
	Print();
	Front();
	enqueue(8);
	Print();
	enqueue(9);
	Print();
	enqueue(10);
	Print();
	enqueue(11);
	Print();
	dequeue();
	Print();
	dequeue();
	Print();
	Front();
    return 0;
}