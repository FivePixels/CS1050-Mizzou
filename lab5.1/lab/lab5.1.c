#include <stdio.h>
#define ROWS1 9
#define COLS1 3
#define ROWS2 3
#define COLS2 4
/*
 * Name: Dylan Bolger
 * Course: CS-1050 SP 2020
 * Lab: Lab 5.1
 * Date: 03/11/2020
 */
void PrintArray(int array[][COLS1], int rows) {
	int i, j;
	for (i=0; i<rows; i++) {
		printf("Tuple %d:", i+1);
		for (j=0; j<COLS1; j++) {
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}
}

void PrintArray2(int array[][COLS2], int rows) {
	int i, j;
	for (i=0; i<rows; i++) {
		printf("Tuple %d:", i+1);
		for (j=0; j<COLS2; j++) {
			printf(" %d ", array[i][j]);
		}
		printf("\n");
	}
}

void PrintGPA(int array1[][COLS1], int array2[ROWS2][COLS2], int rows1) {
	/* Some horrific hard-coding going on here, I didn't understand how to properly iterate through the parallel arrays */
	for (int i=0; i<rows1; i++) {
		printf("Student %d: ", i+1);
		if (array1[i][0] >=90) {
			printf("%d ", 4);
		} else if (array1[i][0] >=80) {
			printf("%d ", 3);
		} else if (array1[i][0] >=70) {
			printf("%d ", 2);
		} else if (array1[i][0] >=60) {
			printf("%d ", 1);
		} else {
			printf("%d ", 0);
		}
		if (array1[i][1] >=85) {
			printf("%d ", 4);
		} else if (array1[i][1] >=75) {
			printf("%d ", 3);
		} else if (array1[i][1] >=60) {
			printf("%d ", 2);
		} else if (array1[i][1] >=50) {
			printf("%d ", 1);
		} else { 
			printf("%d ", 0);
		}
		if (array1[i][2] >=90) {
			printf("%d ", 4);
		} else if (array1[i][2] >=70) {
			printf("%d ", 3);
		} else if (array1[i][2] >=50) {
			printf("%d ", 2);
		} else if (array1[i][2] >=40) {
			printf("%d ", 1);
		} else { 
			printf("%d ", 0);
		}
		printf("\n");
	}
}
int main (void) {
	int array[ROWS1][COLS1] = {{70,69,68},
				{89,88,95},
				{93,97,86},
				{98,75,90},
				{99,51,90},
				{44,32,27},
				{97,90,85},
				{85,99,91},
				{43,82,98}};
	int array2[ROWS2][COLS2] = {{90,80,70,60}, {85,75,60,50},{90,70,50,40}};
	printf("\nHere are the scores:\n");
	PrintArray(array, ROWS1);
	printf("\nHere are the GPA cutoffs:\n");
	PrintArray2(array2, ROWS2);
	printf("\nHere are the GPA:\n");
	PrintGPA(array,array2,ROWS1);
}

