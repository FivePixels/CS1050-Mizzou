#include <stdio.h>

void GetIntAndFloat(int *a, float *b) {
	printf("Please enter an integer followed by a space followed by a float and then hit enter:");
	scanf("%d %f", a, b);
}

void GetString(char string[]) {
	printf("Please enter a string without spaces and then hit enter: ");
	scanf("%s", string);
}

int GetArrayLength() {
	int input;
	printf("How many integers would you like to input? ");
	scanf("%d", &input);
	return input;
}

void GetArray(int array[], int size) {
	for (int i=0; i<size; i++) {
		printf("Enter integer #%d:", i);
		scanf("%d", &array[i]);	
	}
}

void PrintOutput(int *a, float *b, char string[], int array[], int size) {
	printf("You entered: %d, %f, %s", *a, *b, string);
	printf("\nArray Elements:\n");
	for (int i=0; i<size; i++) {
		printf("array[%d] = %d\n", i, array[i]);
	}
}

int main(void) {
	int a; float b;
	char string[256];
	printf("* Welcome to Prelab 6 *\n");
	GetIntAndFloat(&a, &b);
	GetString(string);
	int size = GetArrayLength();	
	int integers[size];
	GetArray(integers, size);
	printf("***********************\n");
	PrintOutput(&a, &b, string, integers, size);
}
