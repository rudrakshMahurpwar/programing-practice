#include <stdio.h>
#include <stdlib.h>

/* Create a linked list ADT with functions for insertion, deletion, traverse forward, traverse reverse, searching for an element, reversing a list and also test the above functionality. */

struct list{
	int data;
	struct list *next;
};

// Insertion
void insert_beg (int ele);
void insert_end(int ele);
void insert_after(int ele, int s);
void insert_before(int ele, int s);

// Deletion
int delete_beg();
int delete_end();
void delete_spec(int ele);

// Display
void travel_forward();
void travel_back();
void reverse();
int search(int ele);

//struct list start = (struct list*) malloc(sizeof(struct list));
struct list *start = NULL;  

int main(){
	int op;
	do{
		printf("\n### MENU ###\n");
		printf("INSERTION OPERATIONS.\n"
			"1. Insert Beginning.\n"
			"2. Insert End.\n"
			"3. Insert After.\n"
			"4. Insert Before.\n"
			"DELETION OPERATIONS.\n"
			"5. Delete Beginning.\n"
			"6. Delete End.\n"
			"7. Delete Specific Element.\n"
			"TRAVERSAL OPERATIONS\n"
			"8. Traverse Forward.\n"
			"9. Traverse Backward.\n"
			"10. Searching and Element.\n"
			"11. Reversing the list.\n"
			"0. Exit\n");
		printf("Enter Choice: ");
		scanf("%d", &op);
		printf("\n");
		int ele, s;
		switch (op){
			case 1:
				printf("Enter element to enter: ");
				scanf("%d", &ele);
				insert_beg(ele);
				break;
			case 2:
				printf("Enter element to enter: ");
				scanf("%d", &ele);
				insert_end(ele);
				break;
			case 3:
				printf("Enter element to enter: ");
				scanf("%d", &ele);
				printf("Enter element to enter after: ");
				scanf("%d", &s);
				insert_after(ele, s);
				break;
			case 4:
				printf("Enter element to enter: ");
				scanf("%d", &ele);
				printf("Enter element to enter after: ");
				scanf("%d", &s);
				(start != NULL) ?
					insert_before(ele, s) :
					printf("List is Empty.\n");
				break;
			case 5:
				(start == NULL) ?
					printf("List is Empty.\n") :
					printf("Deleted element is: %d.\n", delete_beg());
				break;
			case 6:
				(start == NULL) ?
					printf("List is Empty.\n") :
					printf("Deleted Element is: %d.\n", delete_end());
				break;
			case 7:
				if (start == NULL)
					printf("List is Empty.\n");
				else{
					printf("Enter element to delete: ");
					scanf("%d", &ele);
					delete_spec(ele);
				}
				break;
			case 8:
				(start == NULL) ?
					printf("List Empty.\n") :
					travel_forward();
				break;
			case 9:
				(start == NULL) ?
					printf("List is Empty.\n") :
					travel_back();
				break;
			case 10:
				if (start != NULL){
					printf("Enter element to search: ");
					scanf("%d", &ele);
					(search(ele)) ? 
						printf("Element exits.\n") :
						printf("Element absent.\n") ;
				}
				else
					printf("List is Empty.\n");
				break;					
			case 11:
				if(start == NULL)
					printf("List is Empty.\n");
				else{
					reverse();
					travel_forward();
				}
				break;
			default:
				printf("Enter Valid Choice.\n");
				break;
		}
	} while(op);	
	return 0;
}

// Insertion Functions

void insert_beg(int ele){
	struct list *temp = (struct list*) malloc(sizeof(struct list));
	temp -> data = ele;
	temp -> next = NULL;
	temp -> next = start;
	start = temp;
}

void insert_end(int ele){
	if (start == NULL) insert_beg(ele);
	else{
		struct list *temp = (struct list*) malloc(sizeof(struct list));
		temp -> data = ele;
		temp -> next = NULL;
		struct list *curr = start;
		while (curr -> next != NULL)
			curr = curr -> next;
		curr -> next = temp;
	}
}

void insert_after(int ele, int s){
	if (start != NULL){
		struct list *curr = start;
		while(curr!=NULL && curr -> data != s)
			curr = curr -> next;
		if (curr != NULL){
			struct list *temp = (struct list*)(malloc(sizeof(struct list)));
			temp -> data = ele;
			temp -> next = start;
			temp -> next = curr -> next;
			curr -> next = temp;
		} else printf("Not Found.\n"); 
	} else printf("List Empty\n");	
}

void insert_before(int ele, int s){
	if (start != NULL){
		struct list *curr = start;
		if(curr -> data == s)
			insert_beg(ele);
		else{
			struct list *temp = (struct list*)malloc(sizeof(struct list));
			temp -> data = ele;
			temp -> next = NULL;
			while(curr -> next != NULL && curr -> next -> data != s)
				curr = curr -> next;
			if(curr -> next != NULL){
				temp -> next = curr -> next;
				curr -> next = temp;
			}
			else{
			       printf("Not Found\n");
			       free(temp);
			}
		}
	}
}

// Deletetion

int delete_beg(){
	int x= -1;
 	if (start != NULL){
		struct list *temp = start;
		start = temp -> next;
		x = temp -> data;
		free(temp);
	} return x;
}

int delete_end()
{
	int x = -1;
	if(start != NULL)
	{
		struct list *curr = start;
		if (curr -> next == NULL) x = delete_beg();
		else
	       	{
			while(curr -> next -> next != NULL)
				curr = curr -> next;
			x = curr -> next -> data;
			free(curr -> next);
			curr -> next = NULL;
		}
	} return x;
}

void delete_spec(int ele){
	if(start != NULL){
		struct list *curr, *temp;
		curr = start;
		if (start -> data == ele) delete_beg();
		else {
			while (curr -> next != NULL && curr -> next -> data != ele)
				curr = curr -> next;
			if(curr -> next != NULL){
				temp = curr -> next;
				curr -> next = temp -> next;
				free(temp);
			} else printf("Not Found.\n");
		}
	}
}

// Traversing
void travel_forward(){
	if(start != NULL){
		struct list *curr;
		curr = start;
		while (curr != NULL){
			printf("%d ", curr -> data);
			curr = curr -> next;
		}
	} else printf("List is Empty.\n");
}
void recr(struct list *curr){
	if(curr == NULL) return;
	recr(curr -> next);
	printf("%d ", curr -> data);
}

void travel_back(){
	if (start == NULL) 
		printf("Empty list.\n");
	else recr(start);
}

void reverse(){
	struct list *temp, *rev;
	rev = NULL;
	while(start != NULL){
		temp = start;
		start = temp -> next;
		temp -> next = rev;
		rev = temp;
	}
	start = rev;
}

int search(int ele){
	if(start != NULL){
		struct list *curr = start;
		while (curr != NULL && curr -> data != ele)
			curr = curr -> next;
		return (curr == NULL) ? 0 : 1;
	}
	return 0;
}

