#include <stdio.h>
#include <math.h>

void PrintArray(int array[], int size) {
	for (int i=0; i<size; i++) {
		printf("Element %d = %d\n", i, array[i]);
	}
}

int InitializeArray(int array[], int begin, int end, int increment) {
	for (int i = 0;((i <= end && increment > 0)||(i >= end && increment < 0))&& i<end;i++) {
		array[i] = begin + (i * increment);
	}	
	return ceil((float)end/(float)increment);
}

int main (void) {
	int array[256];
	printf("First Array:\n");
	PrintArray(array, InitializeArray(array, 2, 20, 2));
	printf("Second Array:\n");
	PrintArray(array, InitializeArray(array, 1, 97, 3));
}
