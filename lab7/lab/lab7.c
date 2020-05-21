#include <stdio.h>

/* Name: Dylan Bolger
 * Lab: Lab 7
 * Course: CS1050 SP2020
 */

void GetStringFromUser(char * string) {
	printf("Please enter a string:");	
	scanf("%s", string);
}
void ReverseString(char * string, int length) {
        char *e = string;
        while(*e) {
                e++;
        }
        e--;
        while (e > string) {
                *string ^= *e;
                *e ^= *string;
                *string++ ^= *e--;
       }
}

int GetStringLength(char * string) {
	int i;
	for (i=0; string[i] != '\0'; i++);
	return i;
}
int GetSegmentsFromString(char * string, int length) {
	int b = 0;
	for (int i=0; i<length; i++) {
		if (i%3 == 0) {
			b++;
		}
	}
	return b;
}
int main(void) {
	char string[256] = "";
	printf("*** Welcome to Lab 7 ***\n");
	GetStringFromUser(string);
	printf("You entered: %s\n", string);
	int length = GetStringLength(string);
	int segments = GetSegmentsFromString(string, length);
	printf("There are %d segments in the string.\n", segments);
	ReverseString(string, length);
	printf("The reversed result: %s\n", string);
	printf("** Thanks for doing Lab 7 ***");
}
