#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Create a Stack ADT using array implementation and solve the following :
	a. Balancing Symbols.
	b. Evaluation of Postfix expression.
	c. Converting Infix to Postfix.
	d. Converting Infix to Prefix.
*/

struct i_stack{
	int tos;
	int size;
	int *is;
}; // Defination of integer stack

struct c_stack{
	int tos;
	int size;
	char *cs;
}; // Defination of character stack

// Problem Functions Declarations
char main_menu();
void balancing();
void postfixEval();
void infixToPostfix();
int pref(char ch);
void infixToPrefix();
void revstring(char *string);
int pre(char ch);

// Integer Function Declaration
int intFull();
int intEmppty();
int intpop();
int intpeek();
void intpush(int num);
void intdisplay();

// Character Function Declartion
int charFull();
int charEmpty();
char charpop();
char charpeek();
void charpush(char ch);
void chardisplay();

// Stack Declarations
struct i_stack ista;
struct c_stack csta;

int main(){
	char option;
	do{
		option = main_menu();
		switch(option){
			case 'a' :
				balancing();
				break;
			case 'b' :
				postfixEval();
				break;
			case 'c' :
				infixToPostfix();
				break;
			case 'd' :
				infixToPrefix();
				break;
			case 'e': 
				printf("Exiting.\n");
				break;
			default :
				printf("Enter Valid Choice.\n");
				break;
		}
	} while (option != 'e');
	return 0;
}


// Introduction Function
char main_menu(){
	char option;
	printf("\n###### MENU ######\n"
		"a. Balancing Symbols.\n"
		"b. Postfix Evaluation.\n"
		"c. Infix To Postfix.\n"
		"d. Infix to Prefix.\n"
		"e. Exit\n");
	printf("What to Perform (a/b/c/d/e): ");
	scanf(" %c", &option);
	return option;
}

// Character stack Function Definations
int intFull(){
	return (ista.tos == ista.size-1) ? 1 : 0;
}

int intEmpty(){
	return (ista.tos == -1) ? 1 : 0;
}

int intpop(){
	return (!intEmpty()) ? ista.is[ista.tos--] : -1;
}

int intpeek(){
	return (!intEmpty()) ? ista.is[ista.tos] : -1;
}

void intpush(int num){
	if (intFull()) return;
	ista.is[++ista.tos] = num;
}

void intdisplay(){
	if(!intEmpty()){
		for(int i = 0; i <= ista.tos; i++)
			printf("%d ", ista.is[i]);
	}
}

// Character stack Function Definations
int charFull(){
	return (csta.tos == csta.size-1) ? 1 : 0;
}

int charEmpty(){
	return (csta.tos == -1) ? 1 : 0;
}

char charpop(){
	return (!charEmpty()) ? csta.cs[csta.tos--] : '\0';
}

char charpeek(){
	return (!charEmpty()) ? csta.cs[csta.tos] : '\0';
}

void charpush(char ch){
	if(charFull()) return;
	csta.cs[++csta.tos] = ch;
}

void chardisplay(){
	if(!charEmpty()){
		for(int i = 0; i <= csta.tos; i++)
			printf("%c ", csta.cs[i]);
	}
}

// Helping Function Definations

int pref(char ch){
	switch(ch){
		case '(' :
		case '[' :
		case '{' :
			return 0;
		case '+' :
		case '-' :
			return 1;
		case '*' :
		case '/' :
			return 2;
	}
} // Function to assign preferenc of operators for Infix to PostFix

int pre(char ch){
	switch(ch){
		case ')' :
		case ']' :
		case '}' :
			return 0;
		case '+' :
		case '-' :
			return 1;
		case '*' :
		case '/' :
			return 2;
	}
} // Function to assign preferenc of operators for Infix to Prefix;

void revstring(char *string){
	int start = 0;
	int end = strlen(string) - 1;
	char temp;
	while (start<end){
		temp = string[start];
		string[start++] = string[end];
		string[end--] = temp;
	}
} // Function to reverse the string passed by reference

// Problem Function Definations
void balancing(){
	printf("\t\tChecking Balancing Symbol.\n");
	int n, i, flag = 0;
	printf("Enter the length of the Expression: ");
	scanf("%d", &n);
	
	char exp[n];
	printf("Enter the Expression to check: ");
	scanf("%s", exp);

	csta.tos = -1;
	csta.size = n;
	csta.cs = (char*) malloc(csta.size*sizeof(char));

	for(i = 0; i < strlen(exp); i++){
		char ch = exp[i];
		switch(ch){
			case '(' :
			case '[' :
			case '{' :
				charpush(ch);
				break;
			case ')' :
				(charpeek() == '(') ? charpop() : flag++;
				break;
			case ']' :
				(charpeek() == '[') ? charpop() : flag++;
				break;
			case '}' :
				(charpeek() == '{') ? charpop() : flag++;
				break;
			default :
				printf("Unkown character (%c) found.\n", ch);
		}
		if(flag) break;
	}
	
	(charEmpty() && flag == 0) ?
		printf("Expression is Balanced.\n") :
		printf("Expression is NOT Balanced.\n");

	free(csta.cs);
	csta.cs = NULL;
}

void postfixEval(){
	printf("\t\tEvaluation of Postfix Expression.\n");
	int n, i, fp, sp, j = 0;
	printf("Enter the length of the expression: ");
	scanf("%d", &n);

	char exp[n];
	printf("Enter the Postfix Expression to Evaluate: ");
	scanf("%s", exp);

	ista.size = n;
	ista.tos = -1;
	ista.is = (int*) malloc(ista.size*sizeof(int));

	for(i = 0; i < strlen(exp); i++){
		char ch = exp[i];
		switch(ch){
			case '+' :
				fp = intpop();
				sp = intpop();
				intpush(sp+fp);
				break;
			case '-' :
				fp = intpop();
				sp = intpop();
				intpush(sp-fp);
				break;
			case '*' :
				fp = intpop();
				sp = intpop();
				intpush(sp*fp);
				break;
			case '/' :
				fp = intpop();
				sp = intpop();
				intpush(sp/fp);
				break;
			default:
				intpush(ch - '0');
		}
	}

	printf("Final Result of the Expression is: %d", intpeek());

	free(ista.is);
	ista.is = NULL;
}

void infixToPostfix(){
	printf("\t\tConversion of Infix Expression to Postfix Expression.\n");
	int n, i, j = 0;
	printf("Enter the length of the Expression: ");
	scanf("%d", &n);

	char exp[n];
	printf("Enter the Infix Epression to convert: ");
	scanf("%s", exp);

	csta.size = n;
	csta.tos = -1;
	csta.cs = (char*) malloc(csta.size*sizeof(char));

	char output[strlen(exp)+1];
	
	for(i = 0; i < strlen(exp); i++){
		char ch = exp[i];
		switch(ch){
			case '(' :
			case '[' :
			case '{' :
				charpush(ch);
				break;
			case '+' :
			case '-' :
			case '*' :
			case '/' :
				while((!charEmpty()) && (pref(charpeek()) >= pref(ch)))
					output[j++] = charpop();
				charpush(ch);
				break;
			case ')':
				while(!charEmpty() && charpeek() != '(')
					output[j++] = charpop();
				charpop();
				break;
			case ']':
				while(!charEmpty() && charpeek() != '[')
					output[j++] = charpop();
				charpop();
				break;
			case '}':
				while(!charEmpty() && charpeek() != '{')
					output[j++] = charpop();
				charpop();
				break;
			default:
				output[j++] = ch;
				break;
		}
	}

	while(!charEmpty())
		output[j++] = charpop();
	output[j] = '\0';

	printf("%s.\n", output);

	free(csta.cs);
	csta.cs = NULL;
}

void infixToPrefix(){
	printf("\t\tConversion of Infix Expression to prefix Expression.\n");

	int n, i, j = 0;

	printf("Enter the length of the Expression: ");
	scanf("%d", &n);

	char exp[n];
	printf("Enter the Expression: ");
	scanf("%s", exp);

	csta.size = strlen(exp);
	csta.tos = -1;
	csta.cs = (char*) malloc(csta.size*sizeof(char));

	char output[strlen(exp)+1];
	revstring(exp);

	for (i = 0; i <strlen(exp); i++){
		char ch = exp[i];
		switch(ch){
			case ')' :
			case ']' :
			case '}' :
				charpush(ch);
				break;
			case '+' :
			case '-' :
			case '*' :
			case '/' :
				while(!charEmpty() && (pre(charpeek()) > pre(ch)))
					output[j++] = charpop();
				charpush(ch);
				break;
			case '(' :
				if (!charEmpty() && (charpeek() != ')'))
						output[j++] = charpop();
				charpop();
				break;
			case '[' :
				if (!charEmpty() && (charpeek() != ']'))
						output[j++] = charpop();
				charpop();
				break;
			case '{' :
				if (!charEmpty() && (charpeek() != '}'))
						output[j++] = charpop();
				charpop();
				break;
			default :
				output[j++] = ch;
		}
	}
	
	while(!charEmpty())
		output[j++] = charpop();

	output[j] = '\0';
	revstring(output);
	printf("Prefix Expression is: %s.\n", output);

	free(csta.cs);
	csta.cs = NULL;
}
