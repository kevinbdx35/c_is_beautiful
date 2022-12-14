#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
	string numbers[4] = {"617-555-0100", "617-555-0101", "617-555-0102", "617-555-0103"};

	for(int i = 0; i < 4 ; i++)
	{
		if(strcmp(names[i], "EMMA") == 0)
		{
			printf("%s\n", numbers[i]); //ce sont des tableaux séparées mais les données sont aux mêmes emplacement
			return 0;		
		}
	}
	printf("Not found\n");
	return 1;
}
