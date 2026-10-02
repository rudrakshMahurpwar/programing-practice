#include <stdio.h>
#include <stdlib.h>

#define TABLESIZE 11

struct node{
	int data;
	struct node *next;
};

struct node *hashTable[TABLESIZE];

void initTable();
int hashFunction(int key);
void insert(int key);
void printTable();

int main(){
	initTable();

	int arr[] = {5, 16, 27, 42, 10, 21, 32};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < n; i++){
		insert(arr[i]);
	}

	printTable();

	return 0;
}

void initTable(){
	for (int i = 0; i < TABLESIZE; i++)
		hashTable[i] = NULL;
}

int hashFunction(int key){
	return (key % TABLESIZE + TABLESIZE) % TABLESIZE;
}

void insert(int key){
	int index = hashFunction(key);

	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp -> data = key;
	temp -> next = NULL;

	if (hashTable[index] == NULL){
		hashTable[index] = temp;
	}
	else{
		temp -> next = hashTable[index];
		hashTable[index] = temp;
	}
	printf("Inserted %d at %d.\n", key, index);
}

void printTable(){
	for (int i = 0; i < TABLESIZE; i++){
		printf ("Slot %d: ", i);
		struct node *curr = hashTable[i];
		if (curr== NULL)
			printf("NULL");
		else {
			while (curr != NULL){
				printf("%d -> ", curr -> data);
				curr = curr -> next;
			}
			printf("NULL");
		}
		printf("\n");
	}
	printf("\n");
}
