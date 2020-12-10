#include <stdio.h>

#define N 10
int s1[N], s2[N];
int top1 = -1, top2 = -1;
int count = 0;

void push1(int x);
void push2(int x);
int pop1(void);
int pop2(void);
void display(void);

void enqueue(int x)
{
	push1(x);
	count++;
}

void dequeue(void)
{
	int i, a, b;
	if(top1 == -1 && top2 == -1)
	{
		return;
	}
	else
	{
		for(i = 0; i < count; i++)
		{
			a = pop1();
			push2(a);
		}
		printf("Dequeued element : %d\n", pop2());
		count--;
		
		for(i = 0; i < count; i++)
		{
			b = pop2();
			push1(b);
		}
	}
}

void push1(int x)
{
	if(top1 == N - 1)
		return;
	else
		s1[++top1] = x;
}
void push2(int x)
{
	if(top2 == N - 1)
		return;
	else
		s2[++top2] = x;
}

int pop1(void)
{
	return s1[top1--];
}
int pop2(void)
{
	return s2[top2--];
}

void display(void)
{
	if(top1 == -1)
	{
		printf("Queue is empty.\n");
		return;
	}
	else
	{
		for(int i = 0; i <= top1; i++)
			printf("%2d", s1[i]);
	}
}
int main(void)
{
	enqueue(5);
	enqueue(4);
	enqueue(3);
	dequeue();
	enqueue(2);
	display();
    return 0;
}