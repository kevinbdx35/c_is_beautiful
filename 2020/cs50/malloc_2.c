// http://valgrind.org/docs/manual/quick-start.html#quick-start.prepare
 #include <stdlib.h>
 
void f(void)
{
	 int *x = malloc(10 * sizeof(int));//signifie donne moi 10 fois la taille d'un int (40)
	 x[10] = 0; //si j'ai 10 int je n'ai donc pas de case 10, on a ici un buffer overflow
}             //on déborde du tableau....10 000

int main(void)
{
		f();
		return 0;
}
