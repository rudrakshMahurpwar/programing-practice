#include <stdio.h>

int main(){

for (int num = 100; num * 3 < 1000; num ++){
	int digits[9];
	int x = num;
	int y = 2*num;
	int z = 3*num;
	int count = 0, valid = 1;

	while (x){
	       digits[count++] = x%10; x /= 10;	
	}
	while (y){
	       digits[count++] = y%10; y /= 10;	
	}
	while (z){
	       digits[count++] = z%10; z /= 10;
	}

	for (int i = 0; i < count; i++){
		for (int j = i+1; j < count; j++){
			if (digits[i] == digits[j]) valid = 0;
		}
	}
	if (valid) printf("The triad numbers are: %d, %d, %d.\n", num, num*2, num*3);
}
	return 0;
}

