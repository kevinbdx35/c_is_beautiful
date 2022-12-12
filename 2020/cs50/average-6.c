#include <stdio.h>

int main(void)
{
	int n = get_int("Nombre de note : ");

	int scores[n];

	for (int i = 0; i < n; i++)
		{
			scores[i] = get_int("Score %i: ", i + 1);
		}

	printf("Moyenne : Ok");
}
