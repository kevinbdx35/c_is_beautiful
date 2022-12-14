#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
	
	for(int i = 0; i < 4 ; i++)
	{
		if(strcmp(names[i], "EMMA") == 0) //la première chaîne de caractère est names[i] et la seconde c'est "EMMA"
		{
			printf("found\n");
			return 0;		
		}
	}
	printf("Not found\n");
	return 1;
}
