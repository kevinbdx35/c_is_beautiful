#include <cs50.h>
#include <stdio.h>

int main(void)
{
	string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};
	
	for(int i = 0; i < 4 ; i++)
	{
		if(names[i] == "EMMA")
		{
			printf("found\n");		
		}
	}
	printf("Not found\n");
}
