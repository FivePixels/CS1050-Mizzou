#include <stdio.h>
#define COLS 3
#define ROWS 9
void Print2DArray(int array[][COLS], int rows) {
	for (int i=0; i<rows; i++) {
		printf("Row %d:", i);
		for (int j=0; j<COLS; j++) {
			printf("\t%d ", array[i][j]);
		}
		printf("\n");
	}	
}

void PrintRowAverage(int array[][COLS], int whichrow) {
	/* Instruction file specifies an integer to be returned, which doesn't make sense in context */
	int sum = 0;
	float avg;
	for (int i=0; i<COLS; i++) {
		sum+=array[whichrow][i];
	}
	avg = (float)sum/(float)COLS;
	printf("Average of row %d = %.6f\n", whichrow, avg);
}

void PrintColAverage(int array[][COLS], int whichcol) {
	/* Instruction file specifies an integer to be returned, which doesn't make sense in context */
	int sum = 0;
	float avg;
	for (int i=0; i<ROWS; i++) {
		sum+=array[i][whichcol];
	}
	avg = (float)sum/(float)ROWS;
	printf("Average of column %d = %.6f\n", whichcol, avg);
}

int main (void) {
	int array[ROWS][COLS] = {{72,68,62},
				{95,88,95},
				{93,97,86},
				{98,77,98},
				{99,92,90},
				{47,32,27},
				{97,99,85},
				{85,95,91},
				{76,82,98}};
	printf("Matrix of 2D array:\n");
	Print2DArray(array, ROWS);
	printf("Averages of rows:\n");
	for (int i=0; i<ROWS; i++) {
		PrintRowAverage(array, i);
	}
	printf("Averages of columns:\n");
	for (int i=0; i<COLS; i++) {
		PrintColAverage(array, i);
	}
}
