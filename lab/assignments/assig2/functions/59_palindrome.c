#include <stdio.h>

int palindrome(long int n){
	if (n < 0) return 0;
	long int cn, revn;
	int digit;
	cn = n;
	revn = 0;
	while (cn > 0) {
                digit = cn % 10;
                revn = revn * 10 + digit;
                cn /= 10;
        }
	return (revn == n);
}

int main(){
	long int ln;
	printf("Enter long number: ");
	scanf("%ld", &ln);
	(palindrome(ln) == 1) ? printf("Palindrome") : printf("Not a palindrome");
	printf("\n");
	return 0;
}
