//To compile: gcc -o holaMundo helloWorld.c

//library to handle input/output
#include <stdio.h>

//Constant
#define constantNumber 5

//Main function that comiler analyse
int main(){
	printf("Hola C pequehno\n");

	int variableNumber = 10;
	int result;

	result = variableNumber + constantNumber;

	printf("Result : %d \n", result);

	char myLetter;

	printf("Give me a letter : \n");

	// %c => the type of the input, in this case char
	// & => tells the input will be saved in the asigned variable
	scanf("%c", &myLetter);

	printf("Your awesome letter : %c\n", myLetter);

}