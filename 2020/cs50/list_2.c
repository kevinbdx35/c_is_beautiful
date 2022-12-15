#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    // Here, we allocate enough memory to fit three integers, and our variable
    // list will point to the first integer.
    int *list = malloc(3 * sizeof(int));
    // We should check that we allocated memory correctly, since malloc might
    // fail to get us enough free memory.
    if (list == NULL)
    {
        return 1; //L'erreur se produit si l'ordinateur est à cours de mémoire
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

		list = tmp;

    tmp[3] = 4;

    // Now, we can print the new array:
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // And finally, free the memory for the new array.
    free(list);
}
