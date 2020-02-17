#include <stdio.h>

int main(void) {
	for (int i=1; i < 31; i++) {
		(i % 5 == 0) ? printf("%d is divisible by 5\n", i) : printf("%d is not divisible by 5\n", i);	
	}
}
