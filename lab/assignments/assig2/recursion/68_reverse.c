#include <stdio.h>

int reverse(int n, int rev){
	if (n != 0){ 
	rev = (rev*10) + (n%10);
	return reverse(n/10, rev);
	}
	return rev;
}

int main(){
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("The reversed number is: %d.\n", reverse(n, 0));
	return 0;
}
