#include <stdio.h>

const int N =3; //la convention veut que la variable soit en capital

int main(void)
{
	int scores[N];
	scores[0] = 72;
	scores[1] = 73;
	scores[2] = 33;

	printf("Moyenne : %i\n", (scores[0] + scores[1] + scores[2]) / N);
}
