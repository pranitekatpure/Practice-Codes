
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert(int data, int pos)
{
    struct Node *temp = malloc(sizeof(struct Node*));
    temp -> data = data;
    temp -> next = NULL;

    if (pos == 1)
    {
        temp -> next = head;
        head = temp;
        return;
    }
    struct Node *temp1 = head;
    for (int i = 0; i < (pos-2); i++)
    {
        temp1 = temp1 -> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}

void Reverse(struct Node *p)
{
    struct Node *prev, *curr, *next;
    prev = NULL;
    curr = head;
    while (curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

void Print()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(void)
{
    head = NULL;
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

    Reverse(head);
    Print();
    return 0;
}
