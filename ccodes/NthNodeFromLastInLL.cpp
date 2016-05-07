/*
Topic : Linkded List, Two Pointers
Find the nth node from the last in a linked list
*/


#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *next;
};

void push(struct node **head, int data)
{
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	temp ->next = *head;
	*head = temp;
}

void printNthFromLast(struct node *head, int n)
{
	int count = 0;
	struct node *refptr = head, *mainptr = head;

	while(count < n)
	{
		count ++;
		refptr = refptr -> next;
	}

	while(refptr != NULL)
	{
		refptr = refptr -> next;
		mainptr = mainptr -> next;
	}

	printf("The nth node from the last is %d\n", mainptr -> data);
}

int main()
{
  /* Start with the empty list */
  struct node* head = NULL;
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);
 
  printNthFromLast(head, 4);
}