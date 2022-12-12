#include <stdio.h>

int main(void)
{
	int n =3;
	int scores[n];
	scores[0] = 72;
	scores[1] = 73;
	scores[2] = 33;

	printf("Moyenne : %i\n", (scores[0] + scores[1] + scores[2]) / n);
}
