#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert (int data, int pos)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;

    if (pos = 1)
    {
        temp -> next = head;
        head = temp;
        return;
    }

    struct Node *temp1 = head;
    for (int i = 1; i < (pos-1); i++)
        temp1 = temp1 -> next;
    temp -> next = temp1 -> next;
    temp1 -> next = temp;
}

void Delete(struct Node *p, int val)
{
    if (p == NULL)
        return;

    while(p != NULL)
    {
        if (p -> data == val)
        {
            struct Node *temp = p;
            p -> next = temp -> next;
            free (temp);
        }
        else
        {
            p = p -> next;
        }
    }

}

void Print()
{
    struct Node *temp2 = head;
    while (temp2 != NULL)
    {
        printf("%d", temp2 -> data);
        temp2 = temp2 -> next;
    }
    printf("\n");
}

int main(void)
{
    head = NULL;
    int val = 10;
    Insert(2, 1);
    Print();
    Insert(3, 2);
    Print();
    Insert(4, 1);
    Print();
    Insert(10, 2);
    Print();
    Delete(head, 10);
    Print();
    return 0;
}


