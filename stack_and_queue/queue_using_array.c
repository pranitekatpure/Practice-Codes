#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int val)
{
	if(front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = val;
	}
	else if(rear == (MAX_SIZE - 1))
	{
		printf("Queue is full\n");
		return;
	}
	else
	{
		rear++;
		queue[rear] = val;
	}
}

void dequeue(void)
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	else if(front == rear)
	{
		front = rear = -1;
		return;
	}
	else
	{
		front++;
	}		
}

void Front(void)
{
	if(front != -1)
		printf("Front is: %d\n", queue[front]);
	else
		printf("Queue is empty\n");
}

void Print(void)
{
	printf("Queue: ");
	if(front == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	for(int i = front; i <= rear; i++)
		printf("%d ", queue[i]);
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