#include <stdio.h>

void main(){
	// Program to find area and perimeter of circle and rectangle.
	
	// Taking the dimensions of the figures.
	int l, b, r;
	printf("Enter the length and breadth of Rectangle: ");
	scanf("%d %d", &l, &b);
	printf("Enter the radius of the circle: ");
	scanf("%d", &r);

	// Calculating the area of the figures.
	int arect, acircle;
	arect = l*b;
	acircle = 3.14*r*r;

	// Calculating the perimeter of the figures.
	int prect, pcircle;
	prect = 2*(l+b);
	pcircle = 2*3.14*r;

	// Printing the area and perimeter of the figures.
	printf("Rectangle\nArea: %d\nPerimeter: %d\n", arect, prect);
	printf("Circle\nArea: %d\nPerimeter: %d\n", acircle, pcircle);
}
