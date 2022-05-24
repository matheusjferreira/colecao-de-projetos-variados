#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i = 0, j = 0, ordem = 0, linha = 0, coluna = 0, matriz[2][2], diagonal_p[2], diagonal_s[2], vezes = 1, vezes_dois = 1, det = 0;

	inicio:
	printf("\n\n");
	printf("-----------------------------------\n");
	printf("DETERMINANTE MATRIX ORDEM 1X1 & 2X2\n");
	printf("-----------------------------------\n");

	ordem:
	printf("Informe a ordem da matriz: ");
	scanf("%d", &ordem);

	if(ordem < 0) {
		printf("\nNão insira valores negativos!\n");
		goto ordem;
	}

	if(ordem > 2) {
		printf("\n\nInsira somente uma matriz de ordem 1x1 ou 2x2!\n\n");
		system("pause");
		system("cls");
		goto  inicio;
	}

	linha = ordem;
	coluna = ordem;

	for (i = 0; i < linha; i++) {

		for(j = 0; j < coluna; j++) {

			printf("Digite o valor da linha %d coluna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);

		}
	}

	for (i = 0; i < linha; i++) {

		printf("\n");

		for(j = 0; j < coluna; j++) {

			printf("%d\t", matriz[i][j]);

			if(ordem == 1) {

				printf("\n\nA determinante da matriz é: %d\n", matriz[i][j]);

			}

		}

	}

	if(ordem == 2) {

		printf("\n\n");
		printf("------------------\n");
		printf("DIAGONAL PRINCIPAL\n");
		printf("------------------\n");

		for (i = 0; i < linha; i++) {

			for(j = 0; j < coluna; j++) {

				if(i == j) {

					diagonal_p[i] = matriz[i][j];

					printf("%d\n", diagonal_p[i]);

				}

			}
		}

		for(i = 0; i < linha; i++){
			vezes = vezes * diagonal_p[i];
		}

		printf("Multiplicação: %d\n", vezes);

		printf("\n\n");
		printf("-------------------\n");
		printf("DIAGONAL SECUNDÁRIA\n");
		printf("-------------------\n");

		for (i = 0; i < linha; i++) {

			for(j = 0; j < coluna; j++) {

				if(i + j == (linha - 1)) {

					diagonal_s[i] = matriz[i][j];

					printf("%d\n", diagonal_s[i]);

				}

			}
		}

		for(i = 0; i < linha; i++) {
			vezes_dois = vezes_dois * diagonal_s[i];
		}

		printf("Multiplicação: %d\n", vezes_dois);

		det = vezes - vezes_dois;

		printf("\n\nA determinante da matriz é: %d\n", det);

		if(det == 0) {
			printf("\nSistema impossível!\n\n");
		}

	}


	return 0;
}