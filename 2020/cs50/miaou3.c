//solution avec fonction
#include <cs50.h>
#include <stdio.h>

// Abstraction

void miaou(void); //dire à l'ordinateur que la fonction existe

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        miaou(); //appel de la fonction
    }
}

// création de la fonction
void miaou(void)
{
	    printf("miaou\n");
}
