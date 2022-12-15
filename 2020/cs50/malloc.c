#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = get_string("s : "); //Obtenir un string de l'utilisateur
	
	char *t = malloc(strlen(s) + 1); //Quelque soit la taille de l'entrée de s + 1 

	strcpy(t, s); 

	t[0] = toupper(t[0]);
	printf("%s\n", s);
	printf("%s\n", t);

	free(t);//Je libère la mémoire allouée

}
