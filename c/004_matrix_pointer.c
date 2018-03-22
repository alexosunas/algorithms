#include <stdio.h>

int testInFunction(int (*paramImage)[3])
{

	printf("\n ********** INSEDE FUNCTION ********** \n");
	//Access to the address
	printf("\n paramImage : %p \n", paramImage);
	printf("\n paramImage : %d \n", paramImage[1][1]);
	printf("\n paramImage : %d \n", paramImage[2][2]);

	//Dereferencing: access to the value of image, that is a 1 dimensional array [ 1,  3, 	4 ]
	printf("\n *paramImage : %p \n", *paramImage);

	//Dereferencing two times: first access to the first 1 dimensonal array [ 1,  3, 	4 ]
	//Then access to the first value of that array = 1
	printf("\n **paramImage : %d \n", **paramImage);

	**paramImage = 123;

	//Access to the address of second element in first array
	printf("\n ((*paramImage)+1 : %p \n", ((*paramImage)+1) );
	//Access the value of the previous array = [0][1]
	printf("\n *((*paramImage)+1) : %d \n", *((*paramImage)+1) );

	//Access to the address of second element in second array
	printf("\n ((*paramImage)+1 : %p \n", (*(paramImage+1))+1 );
	//Access the value of the previous array = [1][1]
	printf("\n *((*paramImage)+1) : %d \n", *((*(paramImage+1))+1) );

	//Access to the address of second element in second array
	printf("\n (*(paramImage+2))+2 : %p \n", (*(paramImage+2))+2 );
	//Access the value of the previous array = [1][1]
	printf("\n *((*(paramImage+2))+2) : %d \n", *((*(paramImage+2))+2) );

	return 0;
}

int main()
{
	//[ 1,  3, 	4 ]		[ 6, 	8, 		9 ]		[ 10, 	23, 	45 ]
	//1000 1001	1002	1003	1004	1005	1006	1007	1008
	//^image			^image+1				^image+2

	int image[3][3] = {
		{1, 3, 4},
		{6, 8, 9},
		{10, 23, 45}};

	printf("Address \t\t Indexes \t\t Values \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%p \t\t [%d][%d] \t\t %d \n", &image[i][j], i, j, image[i][j]);
		}
	}

	//Access to the address
	printf("\n image : %p \n", image);

	//Dereferencing: access to the value of image, that is a 1 dimensional array [ 1,  3, 	4 ]
	printf("\n *image : %p \n", *image);

	//Dereferencing two times: first access to the first 1 dimensonal array [ 1,  3, 	4 ]
	//Then access to the first value of that array = 1
	printf("\n **image : %d \n", **image);

	//Access to the address of second element in first array
	printf("\n ((*image)+1 : %p \n", ((*image)+1) );
	//Access the value of the previous array = [0][1]
	printf("\n *((*image)+1) : %d \n", *((*image)+1) );

	//Access to the address of second element in second array
	printf("\n ((*image)+1 : %p \n", (*(image+1))+1 );
	//Access the value of the previous array = [1][1]
	printf("\n *((*image)+1) : %d \n", *((*(image+1))+1) );

	//Access to the address of second element in second array
	printf("\n (*(image+2))+2 : %p \n", (*(image+2))+2 );
	//Access the value of the previous array = [1][1]
	printf("\n *((*(image+2))+2) : %d \n", *((*(image+2))+2) );


	int (*pImage)[3] = image;

	printf("\n pImage : %p \n", pImage);
	printf("\n *pImage : %p \n", *pImage);
	printf("\n &pImage : %p \n", &pImage);
	printf("\n pImage + 1 : %p \n", pImage+1);

	testInFunction(image);

	printf("\n ********** RETURN TO MAIN ********** \n");

	//value afected in function is reflected here, since is a pointer
	printf("\n **image : %d \n", **image);

	int* rowIamge = *image;

	printf("\n rowIamge : %p \n", rowIamge);
	printf("\n *rowIamge : %d \n", *rowIamge);
	printf("\n &rowIamge : %p \n", &rowIamge);
	printf("\n rowIamge + 1 : %p \n", rowIamge+1);

	return 0;
}