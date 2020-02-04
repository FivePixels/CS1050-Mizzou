#include <stdio.h>

int main(void) {
	for (int i=0; i < 34; i++) {
		if (i > 0 && i % 3 == 0) {
			printf("%d - divisible by 3\n", i);
		} else {
			printf("%d\n", i);
		}
	}
}
