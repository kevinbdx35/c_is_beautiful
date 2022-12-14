#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int numbers[6] = {4, 8, 15, 16, 23, 42}; //Une autre façon de déclarer les valeurs d'un tableau
	
	for(int i = 0; i < 6 ; i++)
	{
		if(numbers[i] == 50)
		{
			printf("found\n");		
		}
	}
	printf("Not found\n");
}
