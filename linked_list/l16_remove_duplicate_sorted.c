/* For example if the linked list is 11->11->11->21->43->43->60 
then removeDuplicates() should convert the list to 11->21->43->60. */ 

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
 * Function: Remove duplicates from sorted list.
 *---------------------------------------------*/
void remove_duplicate(Node_t *head)
{
	/* Pointer to traverse the linked list */
    Node_t* current = head; 
  
    /* Pointer to store the next pointer of a node to be deleted*/
    Node_t* next_next;  
    
    /* do nothing if the list is empty */
    if (current == NULL)  
       return;  
  
    /* Traverse the list till last node */
    while (current->next != NULL)  
    { 
       /* Compare current node with next node */
       if (current->data == current->next->data)  
       { 
           /* The sequence of steps is important*/               
           next_next = current->next->next; 
           free(current->next); 
           current->next = next_next;   
       } 
       else /* This is tricky: only advance if no deletion */
       { 
          current = current->next;  
       } 
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