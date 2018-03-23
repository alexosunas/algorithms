#include <stdio.h>
#include <string.h>

// Given two strings s1 and s2, write code to check if s2 is a rotation of s1 using only one call to getIsRotated
// time complexity is a max of O(n + n - 1)
// memory complexity O(1) since there is no need to use dara structures

int getIsRotated(char* word, char* rotated)
{

	int isRotated = 0;

	size_t wordLength = strlen(word);

	size_t rotatedLength = strlen(rotated);

	// printf("wordLength : %zu \n", wordLength);
	// printf("rotatedLength : %zu \n", rotatedLength);

	if(wordLength != rotatedLength)
		return isRotated;

	int wordPosition = 0;
	int indexFoundAt = 0;
	int i;

	for(i = 0; i < rotatedLength; i++)
	{
		// printf("************ START ITERATION ******************\n");
		// printf("&rotated[%d] : %p \n", i, &rotated[i]);
		// printf("rotated[%d] : %c \n", i, rotated[i]);

		// printf("&word[%d] : %p \n", wordPosition, &word[wordPosition]);
		// printf("word[%d] : %c \n", wordPosition, word[wordPosition]);

		if(rotated[i] == word[wordPosition]){
			if(wordPosition == 0){
				indexFoundAt = i;
			}

			wordPosition++;
		}else{
			wordPosition = 0;
		}
	}

	// printf("indexFoundAt : %d \n", indexFoundAt);
	// printf("wordPosition : %d \n", wordPosition);

	if(wordPosition == 0 || wordPosition == wordLength){

		if(strcmp(word, rotated) == 0){

			isRotated = 1;
		}else{
			isRotated = 0;
		}

	}else{
		int j = 0;
		for(i = wordPosition; i< wordLength; i++){

			// printf("************ START ITERATION ******************\n");
			// printf("&rotated[%d] : %p \n", j, &rotated[j]);
			// printf("rotated[%d] : %c \n", j, rotated[j]);

			// printf("&word[%d] : %p \n", i, &word[i]);
			// printf("word[%d] : %c \n", i, word[i]);

			if(word[i] == rotated[j]){
				isRotated = 1;
				j++;
			}else{
				isRotated = 0;
				break;
			}
		}
	}

	return isRotated;
}

int main()
{
	// 0 1 2 3 4
	// a b c d e
	// c d e a b
	char word[] = "composition";
	char wordCopy[] = "composition";
 	char rotated[] = "positioncom";
	char errorWord[] = "positioscom";

	printf("word : %p \n", word);

	int isRotated = getIsRotated(word, wordCopy);

	printf("isRotated : %d\n", isRotated);

	return 0;
}