#include <stdio.h>

int main()
{
	int impreso = 0, anterior = 1;

	while(impreso <= 13)
	{
		printf("%d\t", impreso);
		impreso += anterior ;
		anterior = impreso - anterior;
	}
	// \t = tabula��o horizontal.
	// loop while para seguir at� satisfazer a condi��o.
	// += � a mesma coisa que impreso = impreso + anterior.


	return 0;
}
