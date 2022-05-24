#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int op, i, j;

void menu() {

	do{
		system("color 0F");

		printf("\n\n");
        printf("_________                                               \n");
        printf("\\_   ___ \\____________    _____   ___________         \n");
        printf("/    \\  \\/\\_  __ \\__  \\  /     \\_/ __ \\_  __ \\  \n");
        printf("\\     \\____|  | \\// __ \\|  Y Y  \\  ___/|  | \\/    \n");
        printf(" \\______  /|__|  (____  /__|_|  /\\___  >__|           \n");
        printf("        \\/            \\/      \\/     \\/        X & Y\n");
        printf("\n\n");
		printf("[1] Calcular\n");
		printf("[2] Copyright\n");
		printf("[0] Sair\n");
		printf("--> ");
		scanf("%d", &op);


		switch(op) {

			case 1:
			x_y();
			system("pause");
			break;
			system("cls");

			case 2:
			copy();
			system("cls");

			case 0:
			exit(1);

			default:
			system("cls");
			printf("Opção inválida!\n");

		}
	}while(op);
}

void x_y() {

	system("cls");

    int equacao[3][3], z = 0, vezes = 1, vezes2 = 1, dy_vetor[4], equacao_dy[2][2], d = 0, dx = 0, dy = 0;
    float s1 = 0, s2 = 0;

    printf("\n\n");
    printf("Insira os valores dos coeficientes da equação: \n\n");

	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("Digite o valor do %d%c coeficiente da %d%c linha da equação: ", j + 1, 186, i + 1, 186);
			scanf("%d", &equacao[i][j]);
		}
	}

	printf("\n-----------------");
	for(i = 0; i < 2; i++) {
		printf("\n");
		for(j = 0; j < 3; j++) {
			printf("%d\t", equacao[i][j]);

			if((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 1 && j == 0) || (i == 1 && j == 2)){
				dy_vetor[z] = equacao[i][j];
				z++;
			}
		}
	}
	printf("\n-----------------\n");

	printf("\n\nD:\n");

	for(i = 0; i < 2; i++) {
		printf("\n");
		for(j = 0; j < 2; j++) {
			printf("%d\t", equacao[i][j]);

			if(i == j) {
				vezes = vezes * equacao[i][j];
			}

			if(i != j) {
				vezes2 = vezes2 * equacao[i][j];
			}
		}
	}

	d = vezes - vezes2;

	if(d == 0) {
		printf("\n\nSistema Impossível.\nNão existe nenhum par ordenado que satisfaça as equações do sistema.\nD = %d\n\n", d);
		system("pause");
		menu();
	}

	printf("\nDiagonal principal: %d", vezes);
	printf("\nDiagonal secundaria: %d", vezes2);

	printf("\nDeterminante de D: %d", d);

	vezes = 1;
	vezes2 = 1;

	printf("\n\nDx:\n");

	for(i = 0; i < 2; i++) {
		printf("\n");
		for(j = 1; j < 3; j++) {
			printf("%d\t", equacao[i][j]);

			if((i == 0 && j == 1) || (i == 1 && j == 2)) {
				vezes = vezes * equacao[i][j];
			}

			if((i == 0 && j == 2) || (i == 1 && j == 1)) {
				vezes2 = vezes2 * equacao[i][j];
			}
		}
	}

	printf("\nDiagonal principal: %d", vezes);
	printf("\nDiagonal secundaria: %d", vezes2);
	dx = - (vezes - vezes2);
	printf("\nDeterminante de Dx: %d", dx);

	z = 0;
	vezes = 1;
	vezes2 = 1;

	printf("\n\nDy:\n");

	for(i = 0; i < 2; i++) {
		printf("\n");
		for(j = 1; j < 3; j++) {
			equacao_dy[i][j] = dy_vetor[z];
			z++;
			printf("%d\t", equacao_dy[i][j]);

			if((i == 0 && j == 1) || (i == 1 && j == 2)) {
				vezes = vezes * equacao_dy[i][j];
			}

			if((i == 0 && j == 2) || (i == 1 && j == 1)) {
				vezes2 = vezes2 * equacao_dy[i][j];
			}
		}
	}

	printf("\nDiagonal principal: %d", vezes);
	printf("\nDiagonal secundaria: %d", vezes2);
	dy = vezes - vezes2;
	printf("\nDeterminante de Dx: %d", dy);

	s1 = (float)dx / (float)d;
	s2 = (float)dy / (float)d;

	printf("\n");
	printf("\nX = %.1f", s1);
	printf("\nY = %.1f", s2);
	printf("\n");
	printf("\nS{%.1f , %.1f}", s1, s2);
	printf("\n\n");

}

copy() {

	system("cls");

	do {

		system("color 09");

		printf("\n\n");
		printf("************************************************************\n");
		printf("\n\t\tMatheus Jediel Ferreira\n\n");
		printf("\t\tMiguel Chiarello Fernandes\n\n");
		printf("\t\tRenan de Souza Ramazzini\n\n\n");
		printf("\t\t    Americana - 2020\n");
		printf("************************************************************\n");
		printf("\n\n");
		printf("[1] Menu\n");
		printf("[0] Sair\n");
		printf("--> ");
		scanf("%d", &op);


		switch(op) {

			case 1:
			system("cls");
			menu();

			case 0:
			exit(1);

			default:
			system("cls");
			printf("Opção inválida!\n");

		}
	}while(op);
}

int main() {

	setlocale(LC_ALL, "Portuguese");

	menu();

	return 0;
}
