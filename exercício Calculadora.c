//Desenvolva um algoritmo que simule ums calculadora.
//voc� deve dar a op��o de o usu�rio escolher entre:
// 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - dividir;
// O usu�rio s� conseguir� processar dois n�meros inteiros por
//sua vez.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int op;
	float n1, n2, resp;

    do {
        printf("Digite 1 para somar\n");
        printf("Digite 2 para subtrair\n");
        printf("Digite 3 para multiplicar\n");
        printf("Digite 4 para dividir\n");
        printf("Digite 5 para sair\n"); 
        scanf("%d", &op);

		printf("insira o primeiro n�mero:\n");
		scanf("%f", &n1);
			printf("insira o segundo n�mero:\n");
		scanf("%f", &n2);
        switch (op) {
        case 1:
            // Coloque o c�digo para a opera��o de soma
            printf("Voc� escolheu somar.\n");
            resp = n1 + n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 2:
            // Coloque o c�digo para a opera��o de subtra��o
            printf("Voc� escolheu subtrair.\n");
            resp = n1 - n2;
            printf("RESPOSTA: %2f.\n", resp);
            break;
        case 3:
            // Coloque o c�digo para a opera��o de multiplica��o
            printf("Voc� escolheu multiplicar.\n");
            resp = n1 * n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 4:
            // Coloque o c�digo para a opera��o de divis�o
            printf("Voc� escolheu dividir.\n");
            resp = n1 / n2;
            printf("RESPOSTA: %.2f.\n", resp);
            break;
        case 5:
            // op��o para sair
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
        }
    } while (op != 5); 

    system("pause");
    return 0;
}
