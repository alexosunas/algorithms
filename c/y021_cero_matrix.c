#include <stdio.h>

// write an algorithm such that if an element in a matrix MxN is 0, its entire row and column are set to 0
// time complexiti O(M x N) + N + M = O(M + N)
// memory complexity O(1)

void printMatrix(int (*matrix)[3])
{
	printf("Address \t\t Indexes \t\t Values \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%p \t\t [%d][%d] \t\t %d \n", &matrix[i][j], i, j, matrix[i][j]);
		}
	}
}

void cleanRowInMatrix(int* row, int matrixLength)
{
	printf("row : %p \n", row);
	printf("*rox %d \n", *row);
	int i;
	for(i = 0; i < matrixLength; i++){
		row[i] = 0;
	}
}

void cleanColumnInMatrix(int matrixLength, int (*matrix)[matrixLength], int index)
{
	int i;
	for(i = 0; i < matrixLength; i++){
		matrix[i][index] = 0;
	}
}

void cleanCuadrant(int matrixLength, int rowLength, int (*matrix)[matrixLength], int index)
{
	int i;
	int j;
	int found = 0;
	for(i = 0; i < matrixLength; i++){
		for(j = 0; j < rowLength; j++){
			if(index == matrix[i][j]){
				printf("FOUND WE \n");
				found = 1;
				break;
			}
		}

		if(found == 1){
			break;
		}
	}

	printf("2i : %d \n", i);
	printf("2j : %d \n", j);

	if(i < matrixLength){
		cleanRowInMatrix(*(matrix+i), matrixLength);
		cleanColumnInMatrix(matrixLength, matrix, j);
	}
}

int main()
{
	int fakeImage[3][3] = {
	   {0, 1, 2} ,
	   {4, 5, 6} ,
	   {8, 9, 10}
	};

	int imgLength = sizeof(fakeImage) / sizeof(fakeImage[0]);
	printf("imgLength : %d \n", imgLength);

	int rowLength = sizeof(fakeImage[0]) / sizeof(fakeImage[0][0]);
	printf("rowLength : %d \n", rowLength);

	printMatrix(fakeImage);

	cleanCuadrant(imgLength, rowLength, fakeImage, 5);

	printMatrix(fakeImage);
}