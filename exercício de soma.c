//Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma
//desses n�meros.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{

	// Configurar a localidade para permitir a exibi��o de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");

	int n1, n2, n3, n4, soma;

	printf("Informe o primeiro n�mero: \n");
	scanf("%d", &n1);
	printf("Informe o segundo n�mero: \n");
	scanf("%d", &n2);
	printf("Informe o terceiro n�mero: \n");
	scanf("%d", &n3);
	printf("Informe o quarto n�mero: \n");
	scanf("%d", &n4);

	soma = n1 + n2 + n3 + n4;

	printf("A soma dos quatro n�meros: %d\n", soma);

	system("pause");
	
	return 0;
}