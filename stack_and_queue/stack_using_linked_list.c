#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node_t;
Node_t *top = NULL;

void push(int val)
{
	Node_t *temp = (Node_t *)malloc(sizeof(Node_t));
	if(temp == NULL)
	{
		printf("ERROR: unable to allocate memory\n");
		return;
	}
	temp->data = val;
	temp->next = top;
	top = temp;
}

void pop(void)
{
	if(top == NULL)
	{
		printf("stack is empty\n");
		return;
	}
	Node_t *temp = NULL;
	temp = top;
	top = top->next;
	free(temp);
}

void Top(void)
{
	if(top != NULL)
		printf("Top is %d\n", top->data);
	else
		printf("stack is empty\n");
}

void is_empty(void)
{
	if(top == NULL)
		printf("stack is empty\n");
	else
		printf("stack is not empty\n");
}

void Print(void)
{
	Node_t *temp = top;
	printf("Stack: ");
	if(top == NULL)
	{
		printf("stack is empty\n");
		return;
	}
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main(void)
{
	pop();
	Top();
	Print();
	push(5);
	Print();
	push(4);
	Print();
	push(6);
	Print();
	push(5);
	Print();
	Top();
	push(4);
	Print();
	push(6);
	Print();
	push(6);
	Print();
	Top();
	push(5);
	Print();
	push(4);
	Print();
	push(6);
	Print();
	pop();
	Print();
	pop();
	Top();
    return 0;
}