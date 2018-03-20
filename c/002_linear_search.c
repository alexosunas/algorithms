#include <stdio.h>

int search(int in_vector[], int n, int x)
{
	int i;
	for(i=0; i<n; i++){
		if(in_vector[i] == x)
			return i;
	}

	return -1;
}

int main()
{

	int pos;
	int n = 10;
	int in_vector[] = {12, 23, 34, 45, 51, 62, 73, 88, 93, 0};

	pos = search(in_vector, n, 88);

	printf("%d \n", pos);

}