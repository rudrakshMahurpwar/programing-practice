#include <stdio.h>
#include <stdlib.h>

/* Given two sorted lists, L1 and L2, write a procedure to merge L1 and L2 and generate a third list */

struct node {
	int data;
	struct node *next;
};

void insert_end(struct node **start, int ele);
int delete_start(struct node **start);
void travel_forward(struct node **start);

int main(){
	struct node *L1 = NULL;
	struct node *L2 = NULL;
	struct node *L3 = NULL;

	int count, element;

	// Inserting elements in list 1
	printf("Enter the count of elements in list 1: ");
	scanf("%d", &count);
	printf("Enter the elements of list 1.\n");
	for (int i = 0; i < count; i++){
		printf("\tEnter element %d: ", i+1);
		scanf("%d", &element);
		insert_end(&L1, element);
	}
	
	// Inserting elements in list 2
	printf("Enter the count of elements in list 2: ");
	scanf("%d", &count);
	printf("Enter the elements of list 2.\n");
	for (int i = 0; i < count; i++){
		printf("\tEnter element %d: ", i+1);
		scanf("%d", &element);
		insert_end(&L2, element);
	}
	
	// Displaying the elements of the lists.	
	printf("Elements of list 1 are: ");
	travel_forward(&L1);
	printf("\n");

	printf("Elements of list 2 are: ");
	travel_forward(&L2);
	printf("\n");

	while(L1 != NULL && L2 != NULL){
		if(L1 -> data < L2 -> data){
			insert_end(&L3, L1 -> data);
			delete_start(&L1);
		} else{
			insert_end(&L3, L2 -> data);
			delete_start(&L2);
		}
	}	
	
	while(L1 != NULL){
		insert_end(&L3, L1 -> data);
		delete_start(&L1);
	}

	while(L2 != NULL){
		insert_end(&L3, L2 -> data);
		delete_start(&L2);
	}

	printf("Elements of mergered sorted list is: ");
	travel_forward(&L3);
	printf("\n");
	return 0;
}


void insert_end(struct node **start, int ele){
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp -> data = ele;
	temp -> next = NULL;

	if (*start == NULL)
		*start = temp;
	else{
		struct node *curr = *start;
		while(curr -> next != NULL)
			curr = curr -> next;
		curr -> next = temp;
	}
}

void travel_forward(struct node **start){
	if(*start != NULL){
		struct node *curr = *start;
		while(curr != NULL){
			printf("%d ", curr -> data);
			curr = curr -> next;
		}
	} else printf("List is empty.\n");
}

int delete_start(struct node **start){
	int value = -1;
	if(*start != NULL){
		struct node *temp = *start;
		value = temp -> data;
		*start = temp -> next;
		free(temp);
	}else printf("List is Empty.\n");
	return value;
}
