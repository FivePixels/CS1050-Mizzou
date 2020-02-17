#include <stdio.h>

int main(void) {
	for (int i=50; i>30; i--) {
		if (i % 5 == 0 && i % 2 == 0) {
			printf("%d divisible by 2,5\n", i);
		} else if (i % 5 == 0) {
			printf("%d divisible by 5\n", i);
		} else if (i % 2 == 0) {
			printf("%d divisible by 2\n", i);
		} else {
			printf("%d\n", i);
		}
	}
}
