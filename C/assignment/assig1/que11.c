#include <stdio.h>
#include <stdlib.h>

/* Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Return 1 if there is a cycle in the linked list. Otherwise, return 0 */

typedef struct node{
	int data;
	struct node *next;
} node;

int isCycle(node **head){
	node *fast, *slow;
	fast = slow = *head;
	while(fast != NULL
			&& fast -> next != NULL
			&& fast -> next -> next != NULL)
	{
		slow = slow -> next;
		fast = fast -> next -> next;
		if(fast == slow)
			return 1;
	} return 0;
}

int main(){
	node *head = (node*)malloc(sizeof(node));
	node *first = (node*)malloc(sizeof(node));
	node *second = (node*)malloc(sizeof(node));
	node *third = (node*)malloc(sizeof(node));
	node *fourth = (node*)malloc(sizeof(node));

	head -> next = first;

	first -> data = 1;
	first -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = fourth;

	fourth -> data = 4;
	fourth -> next = first;
	
	printf("When fourth points to address of first.\n");

	(isCycle(&head)) ?
		printf("There is a Cycle in a Linked list.\n") :
		printf("Linked List is an simple linked list.\n");

	printf("\n");
	fourth -> next = NULL;

	printf("When fourth points to NULL.\n");

	(isCycle(&head)) ?
		printf("There is a Cycle in a Linked list.\n") :
		printf("Linked List is an simple linked list.\n");

	return 0;
}
