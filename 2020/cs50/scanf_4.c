#include <stdio.h>

int main(void)
{
	 char s[5]; //un tableau n'est qu'un morceau de mémoire dos à dos
	 printf("s: "); //une chaîne est juste une séquence de char dos à dos
	 scanf("%s", s);
	printf("s: %s\n", s);
}
