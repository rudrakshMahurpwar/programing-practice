#include <stdio.h>

int palindrome(int n, int cn, int rn){
	if (cn == 0) return (n == rn) ? 1 : 0;
	rn = rn*10 + cn%10;
	return palindrome(n, cn/10, rn);
}

int main(){
	int n;
	printf("Enter palindrome: ");
	scanf("%d", &n);

	(palindrome(n, n, 0) == 1) ? printf("Palindrome") : printf("Not Palindrome");
	printf("\n");
	return 0;
}

