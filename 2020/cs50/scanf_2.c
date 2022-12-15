#include <stdio.h>

int main(void)
{
	 char *s;
	 printf("s: ");
	 scanf("%s", s);//on ne met pas de & car on a déjà *
	printf("s: %s\n", s);
}
