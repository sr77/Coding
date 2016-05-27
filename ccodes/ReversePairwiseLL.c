#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
/* A linked list node */
struct node
{
    int data;
    struct node *next;
};
 
/* Function to pairwise swap elements of a linked list */
struct node* pairWiseSwap(struct node *head)
{
    struct node* temp;
    if(head == NULL ||  head->next == NULL)
        return head;
    else
    {
        temp = head->next;
        head -> next = temp -> next;
        temp->next = head;
        head = temp;
        head -> next -> next = pairWiseSwap(head -> next -> next);
        return head;
    }
    
    
}
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

void printList(struct node* head)
{
    while(head != NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
} 

/* Druver program to test above function */
int main()
{
    struct node *start = NULL;
 
    /* The constructed linked list is:
     1->2->3->4->5->6->7 */
    //push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
 
    printf("\n Linked list before calling  pairWiseSwap() ");
    printList(start);
    printf("\n");
    start= pairWiseSwap(start);
 
    printf("\n Linked list after calling  pairWiseSwap() ");
    printList(start);
    printf("\n");
 
   
    return 0;
}