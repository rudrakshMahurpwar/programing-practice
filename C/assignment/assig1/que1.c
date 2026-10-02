#include <stdio.h>
#include <stdlib.h>

/* Create a Stack ADT using array implementation. */

struct _stack{
	int tos;
	int size;
	int *s;
} sta;

int menu();
int isEmpty();
int isFull();
int pop();
int peek();
void push(int num);
void display();

int main(){
	int n, op;
	printf("Enter the Size of the stack: ");
	scanf("%d", &n);

	sta.size = n;
	sta.tos = -1;
	sta.s = (int*) malloc(sta.size*sizeof(int));
	if (sta.s == NULL){
		printf("Memory Full\n");
		return -1;
	}

	do{
		op = menu();
		switch(op){
			case 1 :
				int element;
				printf("Enter the element to push: ");
				scanf("%d", &element);
				push(element);
				break;
			case 2 :
				(!isEmpty()) ?
					printf("Poped element is: %d.\n", pop()) :
					printf("Stack is Empty.\n");
				break;
			case 3 :
				(!isEmpty()) ?
					printf("Poped element is: %d.\n", pop()) :
					printf("Stack is Empty.\n");
				break;
			case 4 :
				(isFull()) ?
					printf("Stack is Full.\n") :
					printf("Stack is have space.\n") ;
				break;
			case 5 :
				(isEmpty()) ?
					printf("Stack is Empty.\n") :
					printf("Stack is not Empty.\n");
				break;
			case 0 : 
				printf("Exiting.\n");
			case 6 :
				(!isEmpty()) ?
					display() : printf("Stack is Empty.\n");
				printf("\n");
				break;
			default :
				printf("Invalid Choice.\n");
				break;
		}
	} while(op);
	free(sta.s);
	return 0;
}

int menu(){
	int op;
	printf("\n####Menu####\n");
	printf("1. Push to the stack.\n"
		"2. Pop from stack.\n"
		"3. Peek in stack.\n"
		"4. Check if Full.\n"
		"5. Check if Empty.\n"
		"6. Display Stack Contents\n"
		"0. Exit\n");
	printf("Enter the operation you want to perform (1/2/3/4/5/6/0): ");
	scanf("%d", &op);
	return op;
}

int isFull(){
	return (sta.tos == sta.size-1) ? 1 : 0;
}

int isEmpty(){
	return (sta.tos == -1) ? 1 : 0;
}

int pop(){
	return (!isEmpty()) ? sta.s[sta.tos--] : -1;
}

int peek(){
	return (!isEmpty()) ? sta.s[sta.tos] : -1;
}

void push(int num){
	if(!isFull()) sta.s[++sta.tos] = num;
}

void display(){
	if(!isEmpty()){
		for(int i = 0; i <= sta.tos ; i++)
			printf("%d ", sta.s[i]);
	}
}
