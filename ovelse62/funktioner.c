


#include <string.h>

int validate_string(char * str)
{
	int valid = 1;	//set to 0 if not valid
	for (unsigned int i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] == 32 && str[i + 1] == 32)
		{
			//executes if there's two spaces in a row
			valid = 0;
		}
		if (str[0] == 32 || str[strlen(str) - 1] == 32)
		{
			//Executes if there's a space in the start or end of the string
			valid = 0;
		}
	}
	return valid;
}

int count_words(char * str)
{
	int sum = 0;
	for (unsigned int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 32) //32 is ascii value for space
		{
			sum++;
		}
	}
	return sum; //returns the number of spaces
}
