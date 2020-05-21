/* Name: Dylan Bolger
 * Course: CS1050 SP2020
 * Lab: Lab 10
 * Date: 04/27/20
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct _Movie {
	char name[20];
	long gross;
	int year;
} Movie;
int main(int argc, char *argv[] ) {
	int count = 0;
	int lines = 10;
	char *file1;
	file1 = argv[1];
	FILE *fp = fopen(file1, "r");
	if (fp == NULL) {
		printf("Error: Could not open %s\n", file1);
		exit(0);
	}
	Movie movies[lines];
	while (!feof(fp)) {
		fscanf(fp, "%s %ld %d",
		movies[count].name,
		&movies[count].gross,
		&movies[count].year);
		count++;
	}
	printf("Sorted Movies: \n");
	printf("Movie:			Gross:			Year:\n");
	for (int i=0; i<=lines; i++) {
		printf("%s	 %10ld	 %10d\n",
		movies[i].name,
		movies[i].gross,
		movies[i].year);
	}
	fclose(fp);

	printf("%d", (&movies[count])->year);
}

