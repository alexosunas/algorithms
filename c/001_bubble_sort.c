#include <stdio.h>

int change_position(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void bubbleSort(int in_vector[], int n)
{
	int i, j;
	for(i = 0; i < n - 1; i++){

		for(j = 0; j < n - i - 1; j++){

			if(in_vector[j] < in_vector[j + 1])
				change_position(&in_vector[j], &in_vector[j+1]);
		}
	}
}

void printArray(int in_vector[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", in_vector[i]);

	printf("This is the end.");
}

int main()
{
	int in_vector[] = {98, 87, 75, 12, 1, 5, 2};
	int n = sizeof(in_vector) / sizeof(in_vector[0]);
	bubbleSort(in_vector, n);

	printf("sorted Array = \n");
	printArray(in_vector, n);
	printf("\n");

	return 0;
}