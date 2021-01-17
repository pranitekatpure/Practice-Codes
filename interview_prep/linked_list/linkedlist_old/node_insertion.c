
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

void Delete(int pos)
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("List is Empty");
        return;
    }
    if(pos == 1)
    {
        head = temp -> next;
        free(temp);
        return;
    }

    for (int i = 0; i < (pos-2); i++)
    {
        temp = temp -> next;
    }

    struct Node *temp1 = temp -> next;
    temp -> next = temp1 -> next;
    free(temp1);
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
/*
    Insert(2,1);
    Print();
    Insert(3,2);
    Print();
    Insert(4,3);
    Print();
    Insert(5,1);
    Print();
    Insert(6,1);
    Print();
*/
    Delete(0);
    Print();
    return 0;
}
