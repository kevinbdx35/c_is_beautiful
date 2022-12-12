#include <cs50.h>
#include <stdio.h>

// Abstraction with parameterization

void miaou(int n);

int main(void)
{
    miaou(3);
}

// création d'une fonction générique via n
void miaou(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("miaou\n");
    }
}
