/*
Topic : Linked List
Reverse a linked list using recursion
*/
#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
//typedef struct node node;


node* newNode(int data)
{
	node *t = (node *)malloc(sizeof(node));
	t -> data = data;
	t -> next = NULL;
	return t;
}

void printlist(node *head)
{
	while(head != NULL)
	{
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}
void reverseUtil(node *curr, node *prev, node **head)
{
	if(!curr -> next)
	{
		*head = curr;
		curr -> next = prev;
		return;
	}

	node *temp = curr -> next;
	curr -> next = prev;

	reverseUtil(temp, curr, head);
}

void reverse(node **head)
{
	if (!head)
		return;
	reverseUtil(*head, NULL, head);
}



int main()
{
    node *head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(2);
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    head1->next->next->next->next->next = newNode(6);
    head1->next->next->next->next->next->next = newNode(7);
    head1->next->next->next->next->next->next->next = newNode(8);
    cout << "Given linked list\n";
    printlist(head1);
    reverse(&head1);
    cout << "\nReversed linked list\n";
    printlist(head1);
    return 0;
}