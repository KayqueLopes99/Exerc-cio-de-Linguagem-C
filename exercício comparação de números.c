//Fa�a um programa que receba dois n�meros e mostre
//o maior deles. Caso eles sejam iguais, deve-se mostrar
//a mensagem "Os n�meros s�o iguais".

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
float n1, n2;
printf("Insira o primeiro n�mero:\n");
scanf("%f", &n1);
printf("Insira o segundo n�mero:\n");
scanf("%f", &n2);

if(n1 > n2){
printf("O primeiro numero � maior! %.2f.\n", n1);	
}
if(n1 < n2){
printf("O segundo numero � maior! %.2f.\n", n2);	
}
else{
	printf("os n�meros s�o iguais");
}
	system("pause");
	return 0;
}
