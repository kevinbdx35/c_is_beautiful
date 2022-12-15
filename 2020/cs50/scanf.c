// Gets an int from user using scanf
#include <stdio.h>

int main(void)
{
	int x;
	printf("x: ");
	scanf("%i",&x);//on spécifie l'adresse où nous souhaitons insérer l'entrée de l'utilisateur
	printf("x: %i\n", x);
}
