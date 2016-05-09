/*
Topic : Linked List, Floyd Cycle
Detect a loop in a linked list 
*/
#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	/* data */
};
void push(node **head, int data)
{
	node *t = (node *)malloc(sizeof(node *));
	t -> data = data;
	t -> next = *head;
	*head = t;
}

void detectloop(node *head)
{
	node *fastptr = head, *slowptr = head;

	while(slowptr && fastptr && fastptr -> next)
	{
		slowptr = slowptr -> next;
		fastptr = fastptr -> next -> next;

		if(slowptr == fastptr)
		{
			printf("Loop Detected\n");
			return ;
		}
	}
	printf("No loop detected\n");
}
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    /* Create a loop for testing */
    head->next->next->next->next = head;
    detectloop(head);
 
    return 0;
}