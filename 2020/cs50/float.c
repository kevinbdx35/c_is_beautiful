#include <cs50.h>
#include <stdio.h>

int main(void)
{
		float prix = get_int("Quel est le prix?\n");
		printf("Le prix total est de %.2f euros.\n", prix * 1.2);
}
