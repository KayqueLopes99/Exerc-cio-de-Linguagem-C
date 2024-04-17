//Fa�a um progama que receba o sal�rio de um funcion�rio e o percentual
//de aumento, calcule e mostre o valor do aumento e novo sal�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(int argc, char *argv[]) {
	
	// Configurar para permitir a exibi��o de caracteres acentuados
	setlocale(LC_ALL, "Portuguese");

	float sal, perc, aumento, novo_sal;

	// Solicitar ao usu�rio que insira o sal�rio
	printf("Insira o sal�rio:\n");
	scanf("%f", &sal);

	// Solicitar ao usu�rio que insira o percentual de aumento
	printf("Insira o percentual:\n");
	scanf("%f", &perc);
	
	// Calcular o valor do aumento com base no sal�rio e percentual fornecidos
	aumento = sal * perc / 100;
	
	// Calcular o novo sal�rio somando o aumento ao sal�rio original
	novo_sal = sal + aumento;

	// Exibir o valor do aumento e o novo sal�rio com duas casas decimais
	printf("Valor do aumento: %.2f.\n", aumento);
	printf("Valor do novo sal�rio: %.2f.\n", novo_sal);

	// Pausar a execu��o para visualiza��o do desenvolvimento
	system("pause");

	// Indicar que o programa foi conclu�do com sucesso
	return 0;
}
