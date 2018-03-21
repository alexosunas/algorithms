#include <stdio.h>

int main()
{
	int mariachi = 19;

	printf("Address \t VairableName \t value \n");
	printf("%p \t %s \t %d \n", &mariachi, "mariach", mariachi);

	//Is a convention to name your pointer starting with lower case p
	//This will make reference to the same memory address as &mariachi
	int * pMariachi = &mariachi;

	//Will print the same result but now using the pointer
	printf("%p \t %s \t %d \n", pMariachi, "mariach", mariachi);

	//This will print the information of pMariachi
	//the value of pMariachi is the address of mariachi
	printf("%p \t %s \t %p \n", &pMariachi, "pMariachi", pMariachi);

	//by dereferencing a pointer we get the value of the memory it is pointing to.
	printf("\n *pMariachi : %d \n", *pMariachi);

	//Changeing the value in the addressed memory
	*pMariachi = 20;

	//both make reference to the same value.
	printf("\n *pMariachi : %d \n", *pMariachi);
	printf("\n mariachi : %d \n", mariachi);

	//ARRAYS

	int goals[] = {1,3,4,6,8};

	printf("\nindexes \t Address \t \t value \n");

	for(int i = 0; i < 5; i++){
		printf("goals[%d] \t %p \t %d \n", i, &goals[i], goals[i]);
	}

	//Array names are just a pointer to the first element in the array.
	//This will print the address.
	//This will be the same as the address print in the first iteration in the for loop above.
	printf("\ngoals : %p \n", goals);

	//Dereferencing goals will bring the 1st element of the array, since it is pointing to it.
	printf("*goals : %d \n", *goals);

	//Dereferencing "goals + 2" will bring the 3rd element of the array. equivalent to goals[0+2].
	printf("*(goals+2) : %d \n", *(goals+2));


//*************** MAIN TOPIC *****************************

	// 2 DMENSIONS ARRAY
	int image[3][3] = {
		{1, 3, 4},
		{6, 8, 9},
		{10, 23, 45}};

	printf("\n*************** MAIN TOPIC *****************************\n");

	printf("\n image : %p \n", image);
	printf("\n *(image+1) : %d \n", (*image)[1]);
	printf("\n *(image+1) : %d \n", (*image+1)[1]);
	// printf("\n *(image+1) : %d \n", *((image+1)+1));

	printf("\n *(image)[0] : %d \n", *(image)[0]);
	printf("\n *(image)[1]) : %d \n", *(image)[1]);
	printf("\n *(image+1)[0] : %d \n", *(image+1)[0]);
	printf("\n *(image+1)[1] : %d \n", *(image+1)[1]);

	printf("\n indexes \t Address \t \t value \n");
	printf("image[1][1] \t %p \t %d \n", &image[0][0], image[0][0]);
	printf("image[1][1] \t %p \t %d \n", &image[1][1], image[1][1]);

	int **sameImage = image;

	printf("\n sameImage : %p \n", sameImage);
	// printf("\n sameImage[1][1] : %d \n", sameImage[0][0]);

	//Right way to pointer 2 dimentional array
	int (*equalIamge)[3][3] = &image;

	printf("\n equalIamge : %p \n", equalIamge);
	printf("\n *equalIamge : %p \n", *equalIamge);
	printf("\n (*equalIamge)[1][1] : %d \n", (*equalIamge)[1][1]);

	printf("\n*************** END MAIN TOPIC *****************************\n");

//*************** END MAIN TOPIC *****************************
	//STRINGS

	//this is a constant like since it cannot be reasigned in the left hand side.
	//you cant do this: movie1 = "other movie";
	//nor: movie1[] = "other try";
	char movie1[] = "El Santo";

	//This is storing the address where the string begins
	char * movie2 = "El Barto";

	puts(movie2);

	//The value can be reasigned.
	movie2 = "Dia de la bestia";
	puts(movie2);

	printf("Address \t VairableName \t pointedValue \t value \n");
	printf("%p \t %s \t %c \t %s \n", &movie2, "movie2", *movie2, movie2);


	return 0;
}