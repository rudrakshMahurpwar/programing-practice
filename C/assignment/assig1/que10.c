#include <stdio.h>
#include <stdlib.h>

/* Given the start of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well. */

typedef struct node {
	int data;
	struct node *next;
} node;

void insert_end(node **start, int ele);
void delete_spec(node **start, int ele);
void travel(node **start);

int main(){
	node *start = NULL;

	int count, element;
	printf("Enter the length of the list: ");
	scanf("%d", &count);
	

	printf("Enter the elements of the list.\n");
	for (int i = 0; i < count; i++){
		printf("\tEnter element %d: ", i+1);
		scanf("%d", &element);
		insert_end(&start, element);
	}

	printf("Input list is: ");
	travel(&start);
	printf("\n");
	
	node *curr = start;
	node *temp;

	while(curr != NULL && curr -> next != NULL){
		if (curr -> data == curr -> next -> data){
			node *temp = curr -> next;
			curr -> next = curr -> next -> next;
			free(temp);
		} else curr = curr -> next;
	}

	printf("Output list is: ");
	travel(&start);
	printf("\n");
	
	return 0;
}

void insert_end(node **start, int ele){
	node *temp = (node*) malloc(sizeof(node));
	temp -> data = ele;
	temp -> next = NULL;

	if(*start == NULL)
		*start = temp;
	else{
		node *curr = *start;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = temp;
	}
}

void travel(node **start){
	if(*start != NULL){
		node *curr = *start;
		while (curr != NULL){
			printf("%d ", curr -> data);
			curr = curr -> next;
		}
	} else printf("List Empty.\n");
}
