
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
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
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

void Delete(int value)
{
    struct Node *curr = head;
    struct Node *prev = NULL;

    while (curr != NULL)
    {
        if (curr -> data == value)
        {
            if (prev == NULL)
                head = curr -> next;
            else
                prev -> next = curr -> next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr -> next;
    }
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
    int value = 6;
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

    Delete(value);
    Print();
    return 0;
}

