#include <stdio.h>
#include <stdlib.h>

/* Create a Queue ADT using linked list implementation */

struct queue {
	int data;
	struct queue *next;
};

void enqueue(int ele);
int underflow();
int dequeue();
void display();
int menu();

struct queue *front = NULL;

int main(){
	int op;

	do{
		op = menu();
		switch(op){
			case 1 :
				int ele;
				printf("Enter element to enter: ");
				scanf("%d", &ele);
				enqueue(ele);
				break;
			case 2 :
				(!underflow()) ?
					printf("Dequeued element is %d\n", dequeue()) :
					printf("Queue is Empty.\n");
				break;
			case 0 :
				printf("Exiting.\n");
			case 3 :
				(!underflow()) ?
					display() :
					printf("Queue is Empty.");
				printf("\n");
				break;
			case 4 :
				(!underflow()) ?
					printf("Queue have Elements.\n") :
					printf("Queue is empty.\n");
				break;
			default :
				printf("Invalid Choice.\n");
		}
	}while (op);
	return 0;
}

int menu(){
	printf("\n### MENU ###\n");
	printf("1. Enqueue.\n"
		"2. Dequeue.\n"
		"3. Display.\n"
		"4. Check Underflow.\n"
		"0. Exit.\n");
	int op;
	printf("Enter Choice: ");
	scanf("%d", &op);
	return op;
}
int underflow(){
	return (front == NULL) ? 1 : 0;
}

int dequeue(){
	int x = -1;
	if (!underflow()){
		struct queue *temp = front;
		x = temp -> data;
		front = temp -> next;
		free(temp);
	}
	return x;
}

void enqueue(int ele){
	struct queue *temp = (struct queue *) malloc(sizeof(struct queue));
	temp -> data = ele;
	temp -> next = NULL;

	if(front == NULL) front = temp;
	else {
		struct queue *curr = front;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = temp;
	}
}

void display(){
	if (!underflow()){
		struct queue *curr = front;
		while (curr != NULL){
			printf("%d ", curr -> data);
			curr = curr -> next;
		}
	} else printf("List is Empty");
}

