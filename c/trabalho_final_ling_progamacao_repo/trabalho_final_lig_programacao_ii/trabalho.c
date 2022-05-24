/* Matheus Jediel Ferreira
   RA: 0040481911029*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void menu();
void inserir();
void exibir();
void alterar();
void remover();
void remover_t();
void desfazer();
void remover_arquivo();
void copy();

typedef struct cadastro
{
	int ra;
	int status;
	char nome[25];
	float nota1;
	float nota2;
} ALUNO;

FILE *ponteiro;
ALUNO aluno;
char numstr[10];


int main() {

	menu();

	return 0;
}

void menu() {

	int op;

	do {

		system("cls");

		printf("\t\t#######################################################\n");
		printf("\t\t#        TRABALHO - LINGUAGEM DE PROGRAMACAO II       #\n");
		printf("\t\t#                  CADASTRO DE ALUNOS                 #\n");
		printf("\t\t#                                                     #\n");
		printf("\t\t#    u:             .s                                #\n");
		printf("\t\t#    B:             YQ.                               #\n");
		printf("\t\t#    BPYYYr    vriiiB1B                               #\n");
		printf("\t\t#    i7rr7B:  rBPBBQRSI                               #\n");
		printf("\t\t#         Q   dKUr                                    #\n");
		printf("\t\t#        sB   B7g  QBQBQ  SBX iBBBBB vBBBBB  BBQB5    #\n");
		printf("\t\t#        Bq   BrZ .B     :BQQ   rB   Bg     BB  JB    #\n");
		printf("\t\t#        B:  :B72 .BBBB  B  B   BB  .BBQBB LB         #\n");
		printf("\t\t#        B   Sd5: Bd    BBEBQ. .BJ  7B     qB   Er    #\n");
		printf("\t\t#       7B   BJZ  BI   QB   BP rB   BBqbMq  BBEBBI    #\n");
		printf("\t\t#       Rg   BrR                                      #\n");
		printf("\t\t#       Br  .B7q      FACULDADE DE TECNOLOGIA         #\n");
		printf("\t\t#       B   LRuv                                      #\n");
		printf("\t\t#      :B   QuE.                                      #\n");
		printf("\t\t#      QB   BrM                                       #\n");
		printf("\t\t#      IBMRMBYR                                       #\n");
		printf("\t\t#                                                     #\n");
		printf("\t\t#######################################################\n");
		printf("\n\n\n");
		printf("[1] Inserir.\n");
		printf("[2] Exibir.\n");
		printf("[3] Alterar.\n");
		printf("[4] Remover.\n");
		printf("[5] Remover Temporariamente.\n");
		printf("[6] Desfazer Remocao Temporaria.\n");
		printf("[7] Remover Todos os Dados.\n");
		printf("[8] Copyright.\n");
		printf("[9] Encerrar programa.\n");
		printf("------------------------------> ");
		scanf("%d", &op);

		switch(op) {
			case 1:
			inserir();
			system("pause");
			break;

			case 2:
			exibir();
			system("pause");
			break;

			case 3:
			alterar();
			system("pause");
			break;

			case 4:
			remover();
			system("pause");
			break;

			case 5:
			remover_t();
			system("pause");
			break;

			case 6:
			desfazer();
			system("pause");
			break;

			case 7:
			remover_arquivo();
			system("pause");
			break;

			case 8:
			copy();
			system("pause");
			break;

			case 9:
			exit(1);

			default:
			printf("Opcao invalida\n");
			system("pause");
		}
	}while(op);

}

void inserir() {

	char ch;

	ponteiro = fopen ("cadastro.bin","ab");

	if (ponteiro == NULL) {
		printf("Erro ao abrir o arquivo..\n");
		system("pause");
	}
	do {
		system("cls");

		printf("\t\t############\n");
		printf("\t\t# CADASTRO #\n");
		printf("\t\t############\n");
		printf("\n\n\n");

		fflush(stdin);
		printf("Digite o nome do Aluno: \n");
		gets(aluno.nome);

		fflush(stdin);
		printf("Digite o RA de %s: \n", aluno.nome);
		gets(numstr);
		aluno.ra=atoi(numstr);

		fflush(stdin);
		printf("Digite a nota 1 de %s: \n", aluno.nome);
		gets(numstr);
		aluno.nota1=atof(numstr);

		fflush(stdin);
		printf("Digite a nota 2 de %s: \n", aluno.nome);
		gets(numstr);
		aluno.nota2=atof(numstr);

		aluno.status = 1;

		printf("O status do cadastro de %s esta ativo. Valor = [%d].\n", aluno.nome, aluno.status);

		fwrite(&aluno, sizeof(ALUNO),1,ponteiro);
		printf("Deseja continuar [s] [n] \n");

	}while(toupper(getchar()) == 'S');

	while((ch = getchar()) != '\n' && ch != EOF);
	fclose(ponteiro);
}

void exibir()
{
	system("cls");

	int cab;

	ponteiro = fopen ("cadastro.bin","rb");
	if (ponteiro == NULL)
	{
		printf("Erro ao abrir o arquivo..\n");
	}
	else
	{
        //printf("%-10s %-10s %-10s %s\n\n","NOME","RA","NOTA 1","NOTA 2");
		while(fread(&aluno, sizeof(ALUNO),1,ponteiro))
		{
			if(aluno.status == 1) {
				if(cab>10)
				{
					printf("\t\t################################\n");
					printf("\t\t#       ALUNOS CADASTRADOS     #\n");
					printf("\t\t#Lista de dados Arquivo Binario#\n");
					printf("\t\t################################\n");
					printf("\n\n\n");
					printf("%-10s %-10s %-10s %-10s %s\n\n","NOME","RA","NOTA 1","NOTA 2", "SATATUS");
					printf("%-10s %-10d %-10.2f %-10.2f %d\n", aluno.nome, aluno.ra, aluno.nota1, aluno.nota2, aluno.status);
					cab=1;
				}
				else
				{
					printf("%-10s %-10d %-10.2f %-10.2f %d\n", aluno.nome, aluno.ra, aluno.nota1, aluno.nota2, aluno.status);
					cab++;
				}
				printf("\n");
			}
		}
	}
	fclose(ponteiro);
}

void alterar() {

	int c = 0;
	char numstr[10];

	system("cls");

	printf("\t\t###########\n");
	printf("\t\t# ALTERAR #\n");
	printf("\t\t###########\n");
	printf("\n\n\n");

	char nome[30];
	ponteiro = fopen ("cadastro.bin","rb+");

	if (ponteiro == NULL)
	{
		printf("Erro ao abrir o arquivo..\n");
		system("pause");
	}
	else
	{

		fflush(stdin);
		printf("Digite o nome a ser pesquisado.. \n");
		gets(nome);

		while(fread(&aluno,sizeof(ALUNO),1,ponteiro) != 0)
		{
			if(strcmp(nome, aluno.nome) == 0) {
				printf("\n Nome...: %s \n", aluno.nome);
                // gets(aluno.nome);
				printf("\n RA...: %d \n", aluno.ra);
				gets(numstr);
				aluno.ra=atoi(numstr);
				printf("\n Nota 1...: %f \n", aluno.nota1);
				gets(numstr);
				aluno.nota1=atof(numstr);
				printf("\n Nota 2...: %f \n", aluno.nota2);
				gets(numstr);
				aluno.nota2=atof(numstr);
				fseek(ponteiro, -(int)sizeof(ALUNO),SEEK_CUR);
				fwrite(&aluno, sizeof(ALUNO),1,ponteiro);
				printf("Registro alterado com sucesso...\n");
				c++;
				break;
			}
		}
		if(c == 0) {
			printf("Nome nao encontrado...\n");
		}
	}
	fclose(ponteiro);
}

void remover_t() {
	int c = 0;

	system("cls");

	printf("\t\t###########################\n");
	printf("\t\t# REMOVER TEMPORARIAMENTE #\n");
	printf("\t\t###########################\n");
	printf("\n\n\n");

	char nome[30];
	ponteiro = fopen ("cadastro.bin","rb+");

	if (ponteiro == NULL)
	{
		printf("Erro ao abrir o arquivo..\n");
		system("pause");
	}
	else
	{

		fflush(stdin);
		printf("Digite o nome a ser pesquisado.. \n");
		gets(nome);

		while(fread(&aluno,sizeof(ALUNO),1,ponteiro) != 0)
		{
			if(strcmp(nome, aluno.nome) == 0) {
				aluno.status = 0;
				fseek(ponteiro, -(int)sizeof(ALUNO),SEEK_CUR);
				fwrite(&aluno, sizeof(ALUNO),1,ponteiro);
				printf("Registro alterado com sucesso...\n");
				printf("O status deste cadastro agora e: [%d]\n", aluno.status);
				c++;
				break;
			}
		}
		if(c == 0) {
			printf("Nome nao encontrado...\n");
		}
	}
	fclose(ponteiro);
}

void desfazer() {
	int c = 0;

	system("cls");

	printf("\t\t###############################\n");
	printf("\t\t# DESFAZER REMOCAO TEMPORARIA #\n");
	printf("\t\t###############################\n");
	printf("\n\n\n");

	char nome[30];
	ponteiro = fopen ("cadastro.bin","rb+");

	if (ponteiro == NULL)
	{
		printf("Erro ao abrir o arquivo..\n");
		system("pause");
	}
	else
	{

		fflush(stdin);
		printf("Digite o nome a ser pesquisado.. \n");
		gets(nome);

		while(fread(&aluno,sizeof(ALUNO),1,ponteiro) != 0)
		{
			if(strcmp(nome, aluno.nome) == 0) {
				aluno.status = 1;
				fseek(ponteiro, -(int)sizeof(ALUNO),SEEK_CUR);
				fwrite(&aluno, sizeof(ALUNO),1,ponteiro);
				printf("Registro alterado com sucesso...\n");
				printf("O status deste cadastro agora e: [%d]\n", aluno.status);
				c++;
				break;
			}
		}
		if(c == 0) {
			printf("Nome nao encontrado...\n");
		}
	}
	fclose(ponteiro);    
}

void remover() {
	int c = 0;
	char nome[30];
	ponteiro = fopen ("cadastro.bin","rb");
	FILE *p = fopen("temporario.bin", "ab");

	system("cls");

	printf("\t\t###########\n");
	printf("\t\t# REMOVER #\n");
	printf("\t\t###########\n");
	printf("\n\n\n");

	if (ponteiro == NULL || p == NULL)
	{
		printf("Erro ao abrir o arquivo ou arquivo temporario...\n");
		system("pause");
	}
	else
	{

		fflush(stdin);
		printf("Digite o nome a ser removido...\n");
		gets(nome);
		while(fread(&aluno,sizeof(ALUNO),1, ponteiro))
		{
			if(strcmp(nome, aluno.nome) != 0) {
				fwrite(&aluno, sizeof(ALUNO),1, p);
			}else {
				c++;
			}
		}
		if(c == 0) {
			printf("Nome nao encontrado...\n");
		}
	}
	fclose(p);
	fclose(ponteiro);
	remove("cadastro.bin");
	rename("temporario.bin", "cadastro.bin");
}

void remover_arquivo() {
	remove("cadastro.bin");

	printf("Dados deletados!\n");
}

void copy() {
	system("cls");
	printf("\t\t###############################################################\n");
	printf("\t\t#                                                             #\n");
	printf("\t\t#        Developed by:         Matheus Jediel Ferreira        #\n");
	printf("\t\t#                                                             #\n");
	printf("\t\t#                                                             #\n");
	printf("\t\t#             Santa Barbara D' Oeste - SP - 2020              #\n");
	printf("\t\t#                                                             #\n");
	printf("\t\t###############################################################\n");
	printf("\n\n\n");
}