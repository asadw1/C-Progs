/*
 *	Program: In-Place string reversal
 *	File: main.c
 *	Programmer: Asad Waheed
*/

#include <stdio.h>

void reverse(char* string);

int main(int argc, char* argv[])
{

	while(1)
	{
		if(argc == 2)
		{
			reverse(argv[1]);
			printf("Reversed string: %s\n", argv[1]);
		}
		else
		{
			printf("Error, wrong number of arguments. Please provide only one argument.\n");

		}

		break;

	}

	return 0;
}

void reverse(char* string)
{
	int
		i = 0,
		strlength = 0;

	while(string[i++] != '\0') // stop at null-terminator
	{
		strlength++;
	}

	for(i = 0; i < strlength/2; i++)
	{
			string[strlength] = string[i];
			string[i] = string[strlength - i - 1];
			string[strlength - i - 1] = string[strlength];
	}

	string[strlength] = '\0';

}
