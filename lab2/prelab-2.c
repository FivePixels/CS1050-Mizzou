#include <stdio.h>

int main(void) {
	int x, y;
	printf("Enter two integers separated by a space:\n");
	scanf("%d%d", &x, &y);
	printf("*** Initial Values ***\n");
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
	printf("*** Calculated Values ***\n");
	printf("X times Y = %d\n", x*y);
	printf("X divided by Y = %d\n", x/y);
	printf("X plus 1, quantity times Y = %d\n", (x+1)*y);
	printf("*** Final Values ***\n");
	printf("X = %d\n", x);
	printf("Y = %d\n", y);
}
