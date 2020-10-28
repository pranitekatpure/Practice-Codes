#include <stdio.h>

#define MAX_SIZE 10
int c_queue[MAX_SIZE];
int rear = 0;
int front = 0;
int count = 0;

void enqueue(int val)
{
	if(count == MAX_SIZE)
	{
		printf("\nQueue is full.");
		return;
	}
	else
	{
		c_queue[rear] = val;
		rear = (rear + 1) % MAX_SIZE;
		count++;
	}
}

void dequeue()
{
	if(count == 0)
	{
		printf("\nQueue is empty.");
	}
	else
	{
		front = (front + 1) % MAX_SIZE;
		count--;
	}
}

void Print(void)
{
	if(count == 0)
		printf("\nQueue is empty.");
	else
	{
		printf("\nc_queue: ");
		for(int i = front; i < front + count; i++)
		{
			int index;
			index = i % MAX_SIZE;
			printf("%3d", c_queue[index]);
		}
			
	}
}
		
	
int main(void)
{
	dequeue();
	Print();
	enqueue(1);
	Print();
	enqueue(2);
	Print();
	enqueue(3);
	Print();
	enqueue(4);
	Print();
	enqueue(5);
	Print();
	enqueue(6);
	Print();
	enqueue(7);
	Print();
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
	enqueue(11);
	Print();
	enqueue(12);
	Print();
	
	return 0;
}