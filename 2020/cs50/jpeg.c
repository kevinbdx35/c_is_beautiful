#include <stdio.h>

int main(int argc, char *argv[])
{

// Check usage
if (argc != 2)
	{
		return 1;
	}

// Open file
FILE *file = fopen(argv[1], "r");
if (!file) //(file == NULL)
	{
		return 1;
	}

// Read first three bytes
unsigned char bytes[3];//signifie que c'est un nombre compris entre 0 et 255
fread(bytes,3,1, file); //3 le nombre d'octets que je veux lire, 1 le nombre de fois

// Check first three bytes
if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
	{
		printf("Maybe\n");
	}
else
	{
		printf("No\n");
	}

// Close file
fclose(file);

}
