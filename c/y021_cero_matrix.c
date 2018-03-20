#include <stdio.h>

int *cleanCuadrant(int matrixLength, int rowLength, int (*matrix)[matrixLength], int index)
{
	printf("matrixLength : %d \n", matrixLength);
	printf("rowLength : %d \n", rowLength);
	printf("*matrix : %d \n", matrix[1][1]);

	int i;
	int j;
	int found = 0;
	for(i = 0; i < matrixLength; i++){
		for(j = 0; j < rowLength; j++){
			printf("i : %d \n", i);
			printf("j : %d \n", j);
			printf("index : %d \n", index);
			printf("matrix[i][j] : %d \n", matrix[i][j]);
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

// 	return matrix;

// 	// if(i < imgLength){
// 	// 	cleanRowInMatrix(&fakeImage[i]);
// 	// 	cleanColumnInMatrix(&fakeImage, j);
// 	// }
}

// 	return fakeImage;
// }

// int cleanRowInMatrix(*row)
// {
// 	int i;
// 	for(i = 0; i < imgLength; i++){
// 		*row[i] = 0;
// 	}
// }

// int cleanColumnInMatrix(*matrix, index)
// {
// 	int i;
// 	for(i = 0; i < imgLength; i++){
// 		*matrix[i][index] = 0;
// 	}
// }

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

	// printMatrix(fakeImage);

	cleanCuadrant(imgLength, rowLength, &fakeImage, 5);

	// printMatrix(fakeImage);
}

// void printMatrix(matrix)
// {
// 	int numberOfLines = sizeof(fakeImage) / sizeof(fakeImage[0]);
// 	int numberColumns = sizeof(fakeImage[0]) / sizeof(fakeImage[0][0]);
// 	int row, columns;
// 	for (int row=0; row<numberOfLines; row++)
// 	{
// 	    for(int columns=0; columns<numberColumns; columns++)
//         {
//          printf("%d     ", matrix[row][columns]);
//         }
// 	    printf("\n");
// 	}
// }