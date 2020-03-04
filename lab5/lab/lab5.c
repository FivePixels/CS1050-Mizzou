#include <stdio.h>
#include <math.h>
/* Name: Dylan Bolger
 * Course: CS-1050 C Programming
 * Semester: SP 2020
 * Lab: Lab 5
 * Section: H
 * Date: 03/04/2020
 */
void SumArrays(int array1[], int array2[], int arrayOut[], int size) {
	for (int i=0; i<size; i++) {
		/* Output array value of i = array1 value i plus array2 value i */
		arrayOut[i] = array1[i] + array2[i];
	}
}

void PrintOutputArray(int array[], int size) {
	for (int i=0; i<size; i++) {
		/* Prints all elements in provided array (in this programs case, the output array) */
		printf("\tArray 1 Element %d = %d\n", i, array[i]);
	}
}

void PrintInputArrays(int array[], int array2[], int size) {
	for (int i=0; i<size; i++) {
		/* Prints all elements in two specified arrays (in this programs case, the input arrays) */
		printf("\tArray 1 Element %d = %d\tArray 2 Element %d = %d\n", i, array[i], i, array2[i]);
	}
}

int InitializeArray(int array[], int begin, int end, int increment) {
	double size;
	if (begin > end) {
		size = 1+(begin-end)/increment;
		/* size = 1 + (49-31)/2 = 10 */
		for (int i=0; i<=size; i++) {
			array[i] = begin - (i*increment);
			/* val at i=4 (on this example) is 49 - (4 * 2) = 41 */
		}
	} else {
		size = ceil((float)end/(float)increment);
		/* size = 50/5 = 10*/
		for (int i=0; i<=size; i++) {
			array[i] = begin + (i*increment);
			/* val at i=6 (on this example) is 5 + (6 * 5) = 35 */
		}
	}
	return size;	
}

int main(void) {
	int array1[256];
	int array2[256];	
	int array3[256];
	int size1 = InitializeArray(array1, 5, 50, 5);
	InitializeArray(array2, 3, 30, 3);
	printf("First Input Arrays:\n");
	PrintInputArrays(array1, array2, size1);
	printf("First Output Array:\n");
	SumArrays(array1, array2, array3,size1);
	PrintOutputArray(array3, size1); 
	printf("Second Input Arrays:\n");
	int size2 = InitializeArray(array1, 49, 31, 2);
	InitializeArray(array2, 109, 82, 3);
	PrintInputArrays(array1, array2, size2);
	printf("Second Output Array:\n");
	SumArrays(array1, array2, array3, size2);
	PrintOutputArray(array3, size2);
}
