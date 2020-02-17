#include <stdio.h>

int a,b,c,d,e,f;

int main(void) {
	printf("Enter four integers (A,B,C,D) separated by spaces: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	printf("*** Initial Values ***\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);
	printf("D = %d\n", d);
	printf("*** Calculated Values ***\n");
	printf("The product of C and D = %d\n", c*d);
	printf("The sum of A and B = %d\n", a+b);
	printf("The integer quotient of A divided by D = %d\n", a/d);
	printf("The integer remainder of A divided by C = %d\n", a%c);
	printf("The product of D and C divided by the sum of A and B = %d\n", (d*c)/(a+b));
	printf("*** Bonus ***\n");
	if (a < b && a < c && a < d) {
		printf("The smallest entered value is %d\n", a);
		e = a;
	} else if (b < a && b < c && b < d) {
		printf("The smallest entered value is %d\n", b);
		e = b;
	} else if (c < a && c < b && c < d) {
		printf("The smallest entered value is %d\n", c);
		e = c;
	} else if (d < a && d < b && d < c) {
		printf("The smallest entered value is %d\n", d);
		e = d;
	}
	if (a > b && a > c && a > d) {
		printf("The largest entered value is %d\n", a);
		f = a;
	} else if (b > a && b > c && b > d) {
		printf("The largest entered value is %d\n", b);
		f = b;
	} else if (c > a && c > b && c > d) {
		printf("The largest entered value is %d\n", c);
		f = c;
	} else if (d > a && d > b && d > c) {
		printf("The largest entered value is %d\n", d);
		f = d;
	}
	printf("The smallest times the largest = %d\n", e*f);
}
