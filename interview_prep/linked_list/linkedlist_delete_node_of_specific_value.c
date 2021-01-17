
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
Node_t *head = NULL;

void Insert(int data, int pos)
{
    Node_t *temp = (Node_t*)malloc(sizeof(Node_t));
    temp -> data = data;
    temp -> next = NULL;

    if (pos == 1)
    {
        temp -> next = head;
        head = temp;
        return;
    }

    Node_t *temp1 = head;
    for (int i = 0; i < (pos - 2); i++)
    {
        temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}

void Delete(int value)
{
	Node_t *curr = head;
    Node_t *prev = NULL;
	
	/* Traverse the list. */
    while (curr != NULL)
    {
        /* Check if node with value is present. */
		if (curr -> data == value)
        {
            /* If node is first node. */
			if (prev == NULL)
			{
                head = curr -> next;
            }
			else
			{
                prev -> next = curr -> next;
            }
			free(curr);
            return;
        }
        prev = curr;
        curr = curr -> next;
    }
}

void Print()
{
    Node_t *temp = head;
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(void)
{
    int value = 2;
    Insert(2,1);
    Print();
    Insert(2,2);
    Print();
    Insert(4,3);
    Print();
    Insert(5,1);
    Print();
    Insert(6,1);
    Print();
	
	printf("After Delete: \n");
    Delete(value);
    Print();
    return 0;
}

