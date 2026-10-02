#include <stdio.h>
#include <stdlib.h>

/* Implement Circular Queue ADT using array implementation. */

struct queue{
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
	printf("Enter size of the queue: ");
	scanf("%d", &n);

	que.front = que.rear = -1;
	que.size = n;
	que.q = (int*) malloc(que.size*sizeof(int));
	if(que.q == NULL){
		printf("Memory Full");
		return -1;
	}

	do{
		op = menu();
		switch(op){
			case 1 :
				int element;
				printf("Enter element to enqueue: ");
				scanf("%d", &element);
				(!overflow()) ? 
					enqueue(element) :
					printf("Queue is full.\n");
				break;
			case 2 :
				(!underflow()) ?
					printf("Dequeued element is %d.\n", dequeue()) :
					printf("Queue is Empty.\n");
				break;
			case 3 :
				(underflow()) ?
					printf("Queue is Empty.\n") :
					printf("Queue have elements.\n");
				break;
			case 4 :
				(overflow()) ?
					printf("Queue is Full.\n") :
					printf("Queue have space.\n");
				break;
			case 0 :
			case 5 :
				(!underflow()) ?
					display() :
					printf("Queue is empty.");
				printf("\n");
				break;
			default :
				printf("Invalid Choice.\n");
		}
	} while(op);

	free(que.q);
	return 0;
}

int menu(){
	int op;
	printf("\n#### MENU ####\n");
	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Check Underflow\n");
	printf("4. Check Overflow\n");
	printf("5. Display Queue\n");
	printf("0. Exit\n");
	printf("Enter operation to perform (1/2/3/4/5/0): ");
	scanf("%d", &op);
	return op;
}

int underflow(){
	return (que.front == -1 && que.rear == -1) ? 1 : 0;
}

int overflow(){
	return (que.front == ((que.rear + 1) % que.size)) ? 1 : 0;
}

int dequeue(){
	int x = -1;
	if(!underflow()){
		x = que.q[que.front];
		(que.front == que.rear) ?
			(que.front = que.rear = -1) :
			(que.front = (que.front +1) % que.size);
	}
	return x;
}

void enqueue(int num){
	if(!overflow()){
		if (que.front == -1) que.front++;
		que.rear = (que.rear + 1) % que.size;
		que.q[que.rear] = num;
	}
}

void display(){
	if(!underflow()){
		for (int i = que.front; i != que.rear; i = ((i+1)%que.size))
			printf("%d ", que.q[i]);
		printf("%d", que.q[que.rear]);
	}
}
