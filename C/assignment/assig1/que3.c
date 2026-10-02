#include <stdio.h>
#include <stdlib.h>

/* Implement Queue ADT using array implementation. */

struct _queue{
	int front;
	int rear;
	int size;
	int *q;
} que;

int menu();
int underflow();
int overflow();
int dequeue();
void enqueue(int num);
void display();

int main(){
	int n, op;
	printf("Enter the size of the queue: ");
	scanf("%d", &n);

	que.front = que.rear = -1;
	que.size = n;
	que.q = (int *) malloc(que.size*sizeof(int));
	if(que.q == NULL){
		printf("Memory Not Available.\n");
		return -1;
	}

	do{
		op = menu();
		switch(op){
			case 1 :
				int element;
				printf("Enter the element to enqueue: ");
				scanf("%d", &element);
				enqueue(element);
				break;
			case 2 :
				(!underflow()) ?
					printf("Dequed element is %d\n", dequeue()) :
					printf("Queue is Empty.\n");
				break;
			case 3 :
				(!underflow()) ?
					printf("Queue have elements\n") :
					printf("Queue is Empty.\n");
				break;
			case 4 :
				(overflow()) ?
					printf("Queue is Full.\n") :
					printf("Queue have space.\n");
				break;
			case 0 : printf("Exiting\n");
			case 5 :
				(!underflow()) ? display() : printf("Stack is Empty.\n");
				printf("\n");
				break;
			default :
				printf("Invalid Choice.\n");
				break;
		}
	} while (op);
	free(que.q);
	return 0;
}

int menu(){
	int op;
	printf("\n#### MENU ####\n");
	printf("1. Enqueue\n"
		"2. Dequeue\n"
		"3. Check Underflow\n"
		"4. Check Overflow\n"
		"5. Display\n"
		"0. Exit\n");
	printf("What operation you want to perform (1/2/3/4/5/0): ");
	scanf("%d", &op);
	return op;
}

int underflow(){
	return (que.front == -1 && que.rear == -1) ? 1 : 0;
}

int overflow(){
	return (que.rear == que.size-1) ? 1 : 0;
}

int dequeue(){
	int x = -1;
	if (!underflow()){
		x = que.q[que.front];
		if (que.front == que.rear)
			que.front = que.rear = -1;
		que.front++;
	}
	return x;
}

void enqueue(int num){
	if (!overflow()){
		if (que.front == -1) que.front++;
		que.q[++que.rear] = num;
	}
}

void display(){
	if (!underflow()){
		for (int i = que.front; i <= que.rear; i++)
			printf("%d ", que.q[i]);
	}
}

