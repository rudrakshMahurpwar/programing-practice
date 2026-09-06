#include <stdio.h>

int main(){
	int n;
	printf("Enter the elements of array: ");
	scanf("%d", &n);

	printf("Enter elements of array\n");
	int sarr[n];
	for (int e = 0; e < n; e++) scanf("%d", &sarr[e]);

	int el;
	printf("Enter the element you want to search: ");
	scanf("%d", &el);

	for (int e = 0; e < n; e++){
		if(sarr[e] == el) printf("Element %d found at index %d.\n", el, e);
	}

	return 0;
}
