#include <stdio.h>

int main(){
	int n = 6;
	int arr[6] = {7, 8, 5, 7, 4, 2};
	for (int j = 0; j < n; j++){
		int k = arr[j];
		for(int i = i; i < n; i++)
			if(arr[i] == k) arr[i] = 0;
	}
	for(int i = 0; i < n; i++) printf("%d ", arr[i]);
	return 0;
}
