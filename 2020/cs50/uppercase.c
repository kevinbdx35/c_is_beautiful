#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	string s = get_string("Before : ");
	printf("After : ");

	for(int i = 0, n = strlen(s); i < n; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z') //on vérifie que toutes les lettes sont miniscules
			{
				//conversion en majuscule
				printf("%c", s[i] - 32);
			}
			else
			{
				printf("%c", s[i]);
			}	
	}

	printf("\n"); 

}
}
