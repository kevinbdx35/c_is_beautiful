#include <cs50.h>
#include <stdio.h>

int main(void)
{
		int age = get_int("Quel est ton âge?\n");
		int jours = age * 365;
		printf("ton âge en jours est de %i jours.\n", jours);
}
