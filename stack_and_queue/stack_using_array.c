#include <stdio.h>

#define MAX_SIZE 10
int arr[MAX_SIZE];
int top = -1;

void push(int val)
{
	if(top == (MAX_SIZE - 1))
	{
		printf("ERROR: stack is full\n");
		return;
	}
	arr[++top] = val;
}

void pop(void)
{
	if(top == -1)
	{
		printf("ERROR: stack is empty\n");
		return;
	}
	top--;
}

void Top(void)
{
	if(top != -1)
		printf("Top is %d\n", arr[top]);
	else
		printf("stack is empty\n");
}

void is_empty(void)
{
	if(top == -1)
		printf("stack is empty\n");
	else
		printf("stack is not empty\n");
}

void Print(void)
{
	printf("stack:");
	for(int i = 0; i <= top; i++)
		printf("%d ", arr[i]);
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