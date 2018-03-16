#pragma warning(disable: 4996)

#include <string.h>
#include <stdio.h>

#include "funktioner.h"

#define SIZE 1024



int main()
{
	int sum = 0;
	char str[SIZE];

	fgets(str, SIZE, stdin);

	if(validate_string(str))
	{
		sum = count_words(str);
		printf("number of words: %d", sum + 1);
	}
	else { printf("ilegal string"); }


	

	return 0;
}

