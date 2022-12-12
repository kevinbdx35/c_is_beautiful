#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
	int n = get_int("Nombre de note : ");

	int scores[n];

	for (int i = 0; i < n; i++)
		{
			scores[i] = get_int("Score %i: ", i + 1);
		}

	printf("Moyenne : %f\n", average(n, scores));
}

float average(int length, int array[]) // ici la fonction prend deux entrées /arguments
{
	int sum = 0;
	for (int i = 0; i < length ; i++)
		{
				sum += array[i];
		}
	return sum / length;
}
