#include <stdio.h>
#include <math.h>

double logAny(double x, double b){
	return log(x)/log(b);
}

int main(void) {
	for (int i = 1; i<=78125; i*=5) {
		printf("Number %d:\n", i);
		for (int x = 5; x<=3125; x*=5) {
			printf("\tLog base %d = %f\n", x, logAny(i, x));
		}
	}	
}
