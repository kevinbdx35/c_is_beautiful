#include <stdio.h>

int main(void)
{
	int n = 50;

	printf("%i\n", *&n); //le fait de mettre * et & ça s'annule donc on aura bien la valeur
}
