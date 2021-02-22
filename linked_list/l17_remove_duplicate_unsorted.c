/* For example if the linked list is 12->11->12->21->41->43->21 
 * then removeDuplicates() should convert the list to 12->11->21->41->43. 
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
 * Function: Remove duplicates from unsorted list.
 *---------------------------------------------*/
void remove_duplicate(Node_t *head)
{
    Node_t *temp1, *temp2, *dup;
	temp1 = head;
	while(temp1->next != NULL) /* && temp1->next != NULL */
	{
		temp2 = temp1;
		while(temp2->next != NULL)
		{
			if(temp1->data == temp2->next->data)
			{
				dup = temp2->next;
				temp2->next = temp2->next->next;
				free(dup);
			}
			else
			{
				temp2 = temp2->next;
			}
		}
		temp1 = temp1->next;
	}
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
    remove_duplicate(head);
    print_linkedlist(head);    
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
    printf("\nElements of list are: ");
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }    
}