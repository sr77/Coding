/*
SWAP TWO NODES IN A LINKED LIST WITHOUT SWAPPING THE ACTUAL DATA
*/

#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};

void push(struct node** head, int data)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp -> data = data;
	temp -> next = NULL;
	if(*head == NULL)
	{
		*head = temp;
	}
	else
	{
		temp -> next = *head;
		*head = temp;
	}
}

void printList(struct node **head)
{
	struct node *temp = *head;
	while(temp != NULL)
	{
		printf("%d ",temp -> data);
		temp = temp -> next;
	}
}

void swapNodes(struct node ** head, int x, int y)
{
	if(x == y) return ;

	struct node *currX = *head, *prevX = NULL;
	while(currX && currX -> data != x)
	{
		prevX = currX;
		currX = currX -> next;
	}

	struct node *currY = *head, *prevY = NULL;
	while(currY && currY -> data != y)
	{
		prevY = currY;
		currY = currY -> next;
	}

	if(prevX != NULL)
		prevX -> next = currY;
	else *head = currY;

	if(prevY != NULL)
		prevY -> next = currX;
	else *head = currX;

	struct node *temp = currY -> next;
	currY -> next = currX -> next;
	currX -> next = temp;
}
int main()
{
	struct node *start = NULL;
 
    /* The constructed linked list is:
     1->2->3->4->5->6->7 */
    push(&start, 7);
    push(&start, 6);
    push(&start, 5);
    push(&start, 4);
    push(&start, 3);
    push(&start, 2);
    push(&start, 1);
 
    printf("\n Linked list before calling swapNodes() ");
    printList(&start);
 
    swapNodes(&start, 4, 3);
 
    printf("\n Linked list after calling swapNodes() ");
    printList(&start);
 	printf("\n ");
    return 0;
}