#include <stdio.h>

int main(void) {
	int x;
	int a; 
	int b;
	int c;
	do {
		printf("Enter start: ");
		scanf("%d", &a);
	} while (50>a || 150<a);
	
	do {
		printf("Enter limit: ");
		scanf("%d", &b);
	} while (50>a || 150<a);
	
	do {
		printf("Enter increment: ");
		scanf("%d", &c);
	} while ((a<b && c<=0) || (a>=b && c>=0));
	for (x=a;(a<b && x<=b)||(a>b && x>=b);x+=c) {
		printf("%d ", x);
	}
	printf("\n");
}
