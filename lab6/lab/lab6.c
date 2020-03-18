#include <stdio.h>
/* Name: Dylan Bolger
 * Course: CS-1050 SP 2020
 * Lab: Lab 6
 * Date: 03/18/2020
 */


void GetInput(char *string, int array[]);
void PrintOutput(char *string, int array[]);

void GetInput(char *string, int array[]) {
	printf("Please enter a string: ");
	scanf("%s", string);
	printf("Please enter positive integers, and -1 to end:\n");
	for (int i=0; i<256; i++) {
		printf("Element #%d: ", i);
		scanf("%d", &array[i]);
		if (array[i] == -1) {
			break;
		}
	}

}

void PrintOutput(char *string, int array[]) {
	printf("The string you entered:\n");
	printf("%s\n", string);
	printf("Array elements you entered:\n");
	for (int i=0; i<256; i++) {
		if (array[i] == -1) {
			break;
		}
		printf("array[%d] = %d\n", i, array[i]);
	}
}

int main(void) {
	int integers[256];
	char string[256];
	printf("* Welcome to Lab 6 *\n");
	GetInput(string, integers);
	printf("********************\n");
	PrintOutput(string, integers);
}
