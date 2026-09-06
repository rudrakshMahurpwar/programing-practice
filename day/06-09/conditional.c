#include <stdio.h>

void p1(){
	int d, m, y;
	int valid = 1, isleap = 0;

	printf("Enter date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d, &m, &y);

	if (y % 4 == 0 || y%100 != 0 || y%400==0) isleap = 1;
	
	if (y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
		valid = 0;
	else if (m==2){
		if ( d == 31 || d == 30 || d ==20 && !isleap)
			valid = 0;
	}
	else if (m==4 || m==6 || m==8 || m==10 || m==11){
		if (d == 31) valid = 0;
	}
	(valid == 0) ? printf("Not a valid date") : printf("Valid date");
	printf("\n");

	
}

void p2(){
	int d, m, y, d1, m1, y1, d2, m2, y2;
	int valid = 1, isleap1 = 0, isleap2 = 0;
	int isleap(int y);
	
	printf("Enter first date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);
	
	printf("Enter second date (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d2, &m2, &y2);

	if(d2<d1){
		isleap2 = isleap(y2);
		if (m2==4||m2==6||m2==9||m2==11) d2 += 30;
		else if (m2==2 && !isleap2) d2 +=28;
		else if(m2==2 && isleap2) d2 += 29;
		else d2 += 31;
		m2--;

		if (m2<m1) {
			y2--;
			m2 += 12;
		}
		
	}
	y = y2-y1;
	m = m2-m1;
	d = d2-d1;
	printf("The diffrence in years is %d/%d/%d.\n", d, m, y);
}	

void p3(){
	// Multiplication using russian peasant method
	int n1, n2, sum = 0;
	int odd(int);
	printf("Enter num1: "); scanf("%d", &n1);
	printf("Enter num2: "); scanf("%d", &n2);
	
	while (n1 >= 1){
		if (odd(n1)) sum += n2;
		n2 *= 2;
		n1 /= 2;
	}
	printf("Product of 2 numbers is: %d.\n", sum);

}

void p4(){
	int amt, choice, note;
	int notes(int, int);
	printf("Enter the amount you want: "); scanf("%d", &amt);
	printf("Enter the note you want to start with: "); scanf("%d", &choice);
	switch(choice){
		case 500:
			amt = notes(amt, 500);
		case 200:
			amt = notes(amt, 200);
		case 100:
			amt = notes(amt, 100);
		case 50:
			amt = notes(amt, 50);
		case 20:
			amt = notes(amt, 20);
		case 10:
			amt = notes(amt, 10);
		case 5:
			note = amt/5;
			printf("Number of 5 Rs notes: %d.\n", note);
			amt %= 5;
		case 2:
			note = amt/2;
			printf("Number of 2 Rs notes: %d.\n", note);
			amt %= 2;
		case 1:
			note = amt/1;
			printf("Number of 1 Rs notes: %d.\n", note);
			break;
		default:
			printf("Enter valid values.\n");
			break;
	}
}

void p5(){
	// Program to calculate the day of for the given date
	int d, m, y, j, f, h, fh, day;
	int isleap(int);
	printf("Enter the date (dd/mm/yyyy): "); scanf("%d/%d/%d", &d, &m, &y);
	j = d;
	switch(m-1){
		case 11: j += 31;
		case 10: j += 30;
		case 9: j += 31;
		case 8: j += 31;
		case 7: j += 31;
		case 6: j += 30;
		case 5: j += 31;
		case 4: j += 30;
		case 3: j += 31;
		case 2: j += 28;
		case 1: j += 31;
	}
	// if (isleap(y)) j++;
	f = (y - 1)/4;	
	h = (y - 1)/100;
	fh = (y - 1)/400;
	day = (y + j + f - h + fh) % 7;
	switch(day){
		case 0: printf("Saturday\n"); break;
		case 1: printf("Sunday\n"); break;
		case 2: printf("Monday\n"); break;
		case 3: printf("Tuesday\n"); break;
		case 4: printf("Wednesday\n"); break;
		case 5: printf("Thursday\n"); break;
		case 6: printf("Friday\n"); break;
	}
}

int notes(int amt, int note){
	printf("Number of %d Rs notes: %d.\n", note, amt/note);
	return amt%note;
}

int odd(int n){
	return (n%2 == 0) ? 0 : 1;
}
int isleap(int y){
	return (y % 4 == 0 || y%100 != 0 || y%400==0) ? 1 : 0;
	}

int main(){
	p5();
	return 0;
}
