#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Portuguese");

	int i, j, z = 0, ordem = 0, linha = 0, coluna = 0, cont = 0, matriz[3][3], vetor[9], matriz_soma[3][5], diagonal_p1[3], diagonal_p2[3], diagonal_p3[3], diagonal_s1[3], diagonal_s2[3], diagonal_s3[3], vezes1 = 1, vezes2 = 1, vezes3 = 1, vezes4 = 1, vezes5 = 1, vezes6 = 1, var1 = 0, var2 = 0, var3 = 0;

	inicio:
	printf("\n\n");
	printf("-----------------------------\n");
	printf("DETERMINANTE MATRIX ORDEM 3x3\n");
	printf("-----------------------------\n");

	ordem:
	printf("\n\nInforme a ordem da matriz: ");
	scanf("%d", &ordem);

	if(ordem < 0) {
		printf("\n\nNão insira valores negativos!\n");
		goto ordem;
	}

	if(ordem != 3) {
		printf("\n\nInsira somente uma matriz de ordem 3x3!\n\n");
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

	for(j = 0; j < coluna; j++) {

		for(i = 0; i < linha; i++) {

			if(cont != (linha * linha)) {

				vetor[z] = matriz[i][j];

				cont++;
				z++;

			}
		}
	}

	for (i = 0; i < linha; i++) {

		printf("\n");

		for(j = 0; j < coluna; j++) {

			printf("%d\t", matriz[i][j]);

		}

	}

	z = 0;

	for(j = 0; j < coluna; j++) {

		for(i = 0; i < linha; i++) {

			matriz_soma[i][j] = vetor[z];

			z++;

		}

	}


	for (i = 0; i < 3; i++) {

		printf("\n");

		for(j = 0; j < 3; j++) {

			matriz_soma[i][j] = matriz[i][j];
		}
	}

	z = 0;

	for(j = 3; j <= 5; j++) {

		for(i = 0; i < 3; i++) {

			matriz_soma[i][j] = vetor[z];

			z++;

		}
	}

	printf("\n\nPreparando a matriz...\n\n");

	for (i = 0; i < 3; i++) {

		printf("\n");

		for(j = 0; j < 5; j++) {

			printf("%d\t", matriz_soma[i][j]);

		}

	}

	printf("\n\n");
	printf("------------------\n");
	printf("DIAGONAL PRINCIPAL\n");
	printf("------------------\n");

	for (i = 0; i < 3; i++) {

		for(j = 0; j < 5; j++) {

			if(i == j) {

				diagonal_p1[i] = matriz_soma[i][j];

				printf("%d\t", diagonal_p1[i]);

			}

		}
	}

	printf("\n");

	for (i = 0; i < 3; i++) {

		for(j = 0; j < 5; j++) {

			if((i== 0 && j == 1) || (i == 1 && j == 2) || (i == 2 && j == 3)) {

				diagonal_p2[i] = matriz_soma[i][j];

				printf("%d\t", diagonal_p2[i]);

			}

		}
	}

	printf("\n");

	for (i = 0; i < 3; i++) {

		for(j = 0; j < 5; j++) {

			if((i== 0 && j == 2) || (i == 1 && j == 3) || (i == 2 && j == 4)) {

				diagonal_p3[i] = matriz_soma[i][j];

				printf("%d\t", diagonal_p3[i]);

			}

		}
	}

	for(i = 0; i < 3; i++) {
		vezes1 = vezes1 * diagonal_p1[i];
		vezes2 = vezes2 * diagonal_p2[i];
		vezes3 = vezes3 * diagonal_p3[i];
	}

	var1 = vezes1 + vezes2 + vezes3;

	printf("\n\nDiagonal principal: %d\n", var1);

	printf("\n\n");
	printf("-------------------\n");
	printf("DIAGONAL SECUNDÁRIA\n");
	printf("-------------------\n");

	for (i = 0; i < linha; i++) {

		for(j = 0; j < coluna; j++) {

			if(i + j == (linha - 1)) {

				diagonal_s1[i] = matriz[i][j];

				printf("%d\t", diagonal_s1[i]);

			}

		}
	}

	printf("\n");

	for (i = 0; i < 3; i++) {

		for(j = 0; j < 5; j++) {

			if((i== 0 && j == 3) || (i == 1 && j == 2) || (i == 2 && j == 1)) {

				diagonal_s2[i] = matriz_soma[i][j];

				printf("%d\t", diagonal_s2[i]);

			}

		}
	}

	printf("\n");

	for (i = 0; i < 3; i++) {

		for(j = 0; j < 5; j++) {

			if((i== 0 && j == 4) || (i == 1 && j == 3) || (i == 2 && j == 2)) {

				diagonal_s3[i] = matriz_soma[i][j];

				printf("%d\t", diagonal_s3[i]);

			}

		}
	}

	for(i = 0; i < 3; i++) {
		vezes4 = vezes4 * diagonal_s1[i];
		vezes5 = vezes5 * diagonal_s2[i];
		vezes6 = vezes6 * diagonal_s3[i];
	}

	var2 = - (vezes4) - (vezes5) - (vezes6);

	printf("\n\nDiagonal secundária: %d", var2);

	var3 = var1 + var2;

	printf("\n\n\nValor FINAL: %d\n", var3);

	return 0;
}