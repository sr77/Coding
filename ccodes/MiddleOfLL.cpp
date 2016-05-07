/*
Print the middle element of a linked list
*/
#include <bits/stdc++.h>
using namespace std;

struct node{

	int data;
	struct node* next;
};

void push(struct node **head, int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	temp -> next = *head;
	*head = temp;
}

void printList(struct node *head)
{
	struct node *temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
}
void printMiddle(struct node *head)
{
	struct node *fastptr = head, *slowptr = head;
	if(head != NULL)
	while(fastptr && fastptr -> next != NULL)
	{
		slowptr = slowptr -> next;
		fastptr = fastptr -> next -> next;
	}

	printf("Middle element = %d \n",slowptr -> data);
}

int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    int i;
 
    for (i=5; i>0; i--)
    {
        push(&head, i);
        printList(head);
        printMiddle(head);
    }
 
    return 0;
}