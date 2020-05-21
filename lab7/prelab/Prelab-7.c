#include <stdio.h>

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
	for (i = 0; string[i] != '\0'; ++i);
	return i;
}
void GetStringFromUser(char * string) {
	printf("Please enter a string: ");
	scanf("%s", string);
}

int main(void) {
	char string[] = "";
	printf("*** Welcome to Prelab 7 ***\n");
	GetStringFromUser(string);
	printf("You entered: %s\n", string);
	int len = GetStringLength(string);
	printf("Length: %d\n", len);
	ReverseString(string, len);
	printf("Reversed: %s\n", string);
	int len2 = GetStringLength(string);
	printf("Length: %d\n", len2);
	printf("*** Thanks for doing Prelab 7 ***\n");
}
