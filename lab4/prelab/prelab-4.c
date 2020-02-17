#include <stdio.h>
#include <math.h>

double log16(double x) {
	return (log(x)/log(16));
}
int main(void) {
	int i = 1;
	while (i<=4096) {
		printf("Log base 16 of %d = %lf\n", i, log16(i));
		i *= 2;
	}	
}
