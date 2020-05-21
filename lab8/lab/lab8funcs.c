#include <stdio.h>
void ShowWords(char * string) {
	int i = 0;
	for (i=0; string[i]!='\0'; i++) {
		if (string[i]==' ') {
			printf("\n");
		}
		if (string[i]=='.') {
			continue;
		}
		if (string[i]=='\n') {
			continue;
		}
		printf("%c",string[i]);
	}
}
