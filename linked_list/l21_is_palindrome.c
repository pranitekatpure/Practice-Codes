/* For example if the linked list is 11->12->13->14->13->12->11 
 * then list is Palindrome
 */ 

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node Node_t;
Node_t *head = NULL;

int create_a_linkedlist(int n);
void print_linkedlist(Node_t *head);
/*----------------------------------------------
 * Function: Check if list is Palindrome.
 *---------------------------------------------*/
#define N 10
int stack[10];
int top = -1;
void push(int x)
{
	if(top == N - 1)
		return;
	else
		stack[++top] = x;
}
int pop()
{
	if(top == -1)
		return -1;
	
	return stack[top--];
}
void isPalindrome(Node_t *Head)
{
	int flag = 1;
	Node_t *temp = head;
	while(temp != NULL)
	{
		push(temp->data);
		temp = temp->next;
	}
	printf("\n");
	temp = head;
	while(temp != NULL)
	{
		int a = pop();
		if(a != temp->data)
		{
			flag = 0;
			break;
		}
		temp = temp->next;
	}
	if(flag)
		printf("\nList is Palindrome.");
	else
		printf("\nList is not Palindrome.");
}
/*----------------------------------------------*/
int main()
{
    int n;
    printf("\n\rInsert size of list to be created: ");
    scanf("%d", &n);

    if(create_a_linkedlist(n) == -1) 
        printf("Failed to create list.");

    print_linkedlist(head);
    isPalindrome(head);
    
    return 0;    
}

int create_a_linkedlist(int n)
{   
    Node_t *newnode, *temp;
    for(int i = 0; i < n; i++)
    {
		newnode = (Node_t*)malloc(sizeof(Node_t));

        printf("\nEnter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }        
    }    
    return 0;
}

void print_linkedlist(Node_t *head)
{
    if(head == NULL)
    {
        printf("\nList is empty.");
        return;
    }
	Node_t *temp = head;
    printf("\nElements of list are: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }    
}