#include <stdio.h>

int main(void)
{
	int scores[3]; //3 scores dans le tableau, représente suffisament d'espace pour trois valeurs dans une variable
	scores[0] = 72;
	scores[1] = 73;
	scores[2] = 33;

	printf("Moyenne : %i\n", (scores[0] + scores[1] + scores[2]) / 3);
}
