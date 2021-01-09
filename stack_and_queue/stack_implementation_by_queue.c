#include <stdio.h>

#define N 10
int q1[N], q2[N];
int rear1 = -1, rear2 = -1, front1 = -1, front2 = -1, temp1, temp2;

void enqueue1(int x);
void enqueue2(int x);
int dequeue1(void);
int dequeue2(void);
void display(void);

void push(int x)
{
	enqueue1(x);
}

void pop(void)
{
	int i, a, b;
	if(rear1 == -1 && rear2 == -1 && front1 == -1 && front2 == -1)
	{
		return;
	}
	else
	{
		while(front1 != rear1)
		{
			a = dequeue1();
			if(a == -1)
				return;
			enqueue2(a);
		}
		printf("Popped element: %d\n", dequeue1()); // pop
		temp1 = front1;
		temp2 = rear1;
		front1 = front2;
		rear1 = rear2;
		front2 = temp1;
		rear2 = temp2;
		
/* 		front1 = rear1 = -1;
		
		for(i = front2; i <= rear2; i++)
		{
			b = dequeue2();
			if(b == -1)
				return;
			enqueue1(b);
		}
		front2 = rear2 = -1; */
	}
}

void enqueue1(int x)
{
	if(front1 == -1 && rear1 == -1)
	{
		front1 = rear1 = 0;
		q1[rear1] = x;
	}
	else
	{
		q1[++rear1] = x;
	}
}
void enqueue2(int x)
{
	if(front2 == -1 && rear2 == -1)
	{
		front2 = rear2 = 0;
		q2[rear2] = x;
	}
	else
	{
		q2[++rear2] = x;
	}
}

int dequeue1(void)
{
	if(front1 == -1 && rear1 == -1)
	{
		return -1;
	}
	else if(front1 == rear1)
	{
		int a = q1[front1];
		front1 = rear1 = -1;
		return a;
	}
	else
	{
		int a = q1[front1];
		front1++;
		return a;
	}	
}
int dequeue2(void)
{
	if(front2 == -1 && rear2 == -1)
	{
		return -1;
	}
	else if(front2 == rear2)
	{
		int a = q2[front2];
		front2 = rear2 = -1;
		return a;
	}
	else
	{
		int a = q2[front2];
		front2++;
		return a;
	}	
}

void display(void)
{
	if(front1 == -1 && rear1 == -1)
	{
		printf("Stack is empty.\n");
		return;
	}
	for(int i = rear1; i >= front1; i--)
		printf("%3d", q1[i]);
	printf("\n");
}
int main(void)
{
	push(6);
	display();
	pop();
	display();
	push(5);
	push(4);
	push(3);
	display();
	pop();
	display();
	push(2);
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
	pop();
	display();
    return 0;
}