#include <stdio.h>

float global = 0.5050; //Variable gloable déclarée

int main(void)
{
	triple();
	printf("%f/n", global);
}

void triple(void)
{
	global *= 3;
}
