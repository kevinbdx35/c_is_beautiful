#include <stdio.h>

int main(void)
{
	int n = 50;
	int *p = &n; //adresse de n

	printf("%i\n", *p); //retour sur 50 on vient lire la donnée qui est à l'adresse p
}
