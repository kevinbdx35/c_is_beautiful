#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	string s = get_string("s : "); //Obtenir un string de l'utilisateur
	string t = s; //copier le string s dans la variable t

	t[0] = toupper(t[0]);
	printf("%s\n", s);
	printf("%s\n", t);
}
