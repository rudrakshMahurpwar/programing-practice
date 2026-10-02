#include <stdio.h>
#include <stdlib.h>

/* Create a Stack ADT using linked list implementation */

struct stack{
	int data;
	struct stack *next;
};

int menu();
int isEmpty();
int pop();
int peek();
void display();
void push(int num);

struct stack *start = NULL;

int main(){
	int op;
	do{
		op = menu();
		switch(op){
			case 1 :
				int elem;
				printf("Enter element to push: ");
				scanf("%d", &elem);
				push(elem);
				break;
			case 2 :
				(!isEmpty()) ?
					printf("Popped element is %d\n", pop()) :
					printf("Stack is empty\n");
				break;
			case 3 :
				(isEmpty()) ?
					printf("Stack is Empty.\n") :
					printf("Stack have elments.\n");
				break;
			case 4 :
				(!isEmpty()) ?
					printf("Top Element of Stack is: %d.\n", peek()) :
					printf("Stack is Empty.\n");
				break;
			case 5 :
				(isEmpty()) ?
					printf("Stack is Empty.") :
					display();
				printf("\n");
				break;
			case 0 :
				while(!isEmpty())
					printf("%d ", pop());
				printf("\nExiting\n");
				break;
			default :
				printf("Invalid Choice\n");
		}
	}while(op);

	return 0;
}

int menu(){
	int op;
	printf("\n### MENU ###\n");
	printf("1. Push\n"
		"2. Pop\n"
		"3. Check if Empty.\n"
		"4. Check Top Element.\n"
		"5. Display Stack.\n"
		"0. Exit.\n");
	printf("Enter Choice (1/2/3/4/5/0): ");
	scanf("%d", &op);
	return op;
}

int isEmpty(){
	return (start == NULL);
}

int pop(){
	int x = -1;
	if (!isEmpty()){
		struct stack *temp = start;
		x = temp -> data;
		start = temp -> next;
		free(temp);
	} return x;
}

int peek(){
	return (!isEmpty()) ? start -> data : -1;
}

void push(int ele){
	struct stack *temp = (struct stack*) malloc(sizeof(struct stack));
	if (temp == NULL){
		printf("Memory allocation failed.\n");
		return;
	}
	temp -> data = ele;
	temp -> next = start;
	start = temp;
}

void display(){
	if(isEmpty()) return;
	struct stack *curr = start;
	while (curr != NULL){
		printf("%d ", curr -> data);
		curr = curr -> next;
	}
}

		
