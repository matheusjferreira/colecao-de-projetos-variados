#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "funcoes.h"

int op, i=0, exec[8], pid[8], fim[8], max = 0, e=0, r, remover=0, q, p;
char nome[8][10];

void menu() {

	system("cls");
	system("color 0B");


	do {

		printf("\n\n");
		printf("                       .,,uod8B8bou,,.                                                                       \n");
		printf("              ..,uod8BBBBBBBBBBBBBBBBRPFT?l!i:.                     SIMULADOR DE GERNCIAMENTO FILA DE PRONTOS\n");
		printf("         ,=m8BBBBBBBBBBBBBBBRPFT?!||||||||||||||                                                             \n");
		printf("         !.....:!TVBBBRPFT||||||||||!!^^""'   ||||                                                           \n");
		printf("         !.........:!?|||||!!^^""'            ||||                                                           \n");
		printf("         !.........||||                     ||||                                                             \n");
		printf("         !.........|||| C:\\                 ||||                   [1] Manipulação da Tabela de Processos    \n");
		printf("         !.........||||                     ||||                                                             \n");
		printf("         !.........||||                     ||||                                                             \n");
		printf("         !.........||||                     ||||                   [2] Escalonamento                         \n");
		printf("         !.........||||                     ||||                                                             \n");
		printf("         `.........||||                    ,||||                                                             \n");
		printf("          .;.......||||               _.-!!|||||                   [3] Copyright                             \n");
		printf("   .,uodWBBBBb.....||||       _.-!!|||||||||!:'                                                              \n");
		printf("!YBBBBBBBBBBBBBBb..!|||:..-!!|||||||!iof68BBBBBb....                                                         \n");
		printf("!..YBBBBBBBBBBBBBBb!!||||||||!iof68BBBBBBRPFT?:::   `              [0] Sair                                  \n");
		printf("!....YBBBBBBBBBBBBBBbaaitf68BBBBBBRPFT?!:::::::::     `.                                                     \n");
		printf("!......YBBBBBBBBBBBBBBBBBBBRPFT?!::::::;:!^'`;:::       `.                                                   \n");
		printf("!.......,YBBBBBBBBBBRPFT?!::::::::::^''...::::::;         iBBbo.                                             \n");
		printf("`..........YBRPFT?!::::::::::::::::::::::::;iof68bo.      WBBBBbo.                                           \n");
		printf("  `..........:::::::::::::::::::::::;iof688888888888b.     `YBBBP^'                                          \n");
		printf("    `........::::::::::::::::;iof688888888888888888888b.     `                                               \n");
		printf("      `......:::::::::;iof688888888888888888888888888888b.                                                   \n");
		printf("        `....:::;iof688888888888888888888888888888888899fT!                                                  \n");
		printf("          `..::!8888888888888888888888888888888899fT|!^´'                                                    \n");
		printf("            `' !!988888888888888888888888899fT|!^´'                                                          \n");
		printf("                `!!8888888888888888899fT|!^´'                                                                \n");
		printf("                  `!988888888899fT|!^´'                                                                      \n");
		printf("                    `!9899fT|!^´'                                                                            \n");
		printf("                      `!^´'                                                                                ->  ");

		scanf("%d", &op);

	    switch(op) {

	    	case 1:
	    	manipulacao();
	    	break;

	    	case 2:
	    	escalonamento();
	    	break;

	    	case 3:
	    	copy();
	    	break;

	    	case 0:
	    	exit(1);

	    	default:
	        printf("Digite uma opção válida!\n");
		}
	}while(op);

}

void manipulacao() {

	system("cls");

	do{

		printf("\n\n");
	    printf("[1] Criar Processo\n");
	    printf("[2] Alterar Processo\n");
	    printf("[3] Listar Tabela\n");
	    printf("[4] Remover Processo\n");
	    printf("[5] Limpar Tabela\n");
	    printf("[0] Retornar ao Menu Principal\n");
	    printf("\n\n");
	    printf("-> ");

		scanf("%d", &op);
		system("cls");

		switch(op) {

			case 1:
			criar_processo();

			case 2:
			alterar_processo();

			case 3:
			tabela();

			case 4:
			remover_processo();

			case 5:
			limpar();

			case 0:
			menu();

			default:
			printf("Digite uma opção válida!\n");
		}
	}while(op);

}


void criar_processo() {

	if(max<8) {
		printf("\n\n");

	    printf("--- Criação de processos ---\n\n");
	    printf("\nDigite o nome do processo: ");
	    scanf("%s", nome[i]);

	    valor_positivo:
	    printf("Digite a quantidade de execucões: ");
	    scanf("%d", &exec[i]);
	    if(exec[i] <= 0) {
	    	printf("\nValor inválido, digite um valor positivo maior que 0!\n");
	    	goto valor_positivo;
	    }

		pid[i] = 100 + i;

		printf("\n\nProcesso [%s] PID [%d] com [%d] execuções, criado com sucesso!\n", nome[i], exec[i], pid[i]);

	    i++;
	    max++;
	}else if(max==8) {
		printf("\n\nNúmero máximo de processos existentes!\n");
		opcao();
	}

    do {

    	printf("\n\n");
	 	printf("\n[1] Criar outro processo\n");
	    printf("[2] Retornar ao Menu de Manipulação\n");
	    printf("[0] Retornar ao Menu Principal\n");
	    printf("-> ");

	    scanf("%d", &op);
	    system("cls");

	    switch(op) {

	    	case 1:
	    	criar_processo();

	    	case 2:
	    	manipulacao();


	    	case 0:
	    	menu();


	    	default:
		    printf("Digite uma opção válida!\n");
		}
	}while(op);

}

void alterar_processo() {

	do {
		printf("\n\n");
		printf("--- Alterar Informacões do Processo ---\n\n");
	    printf("\n[1] Nome\n");
	    printf("[2] Quantidade de Execuções\n");
	    printf("[0] Voltar\n");
	    printf("-> ");

	    scanf("%d", &op);
	    system("cls");

	    switch(op) {
	    	case 1:
	    	printf("\n\n");
	    	printf("--- Alterando Nome ---\n\n");
	    	procurando:
            printf("Digite o PID do processo: ");
            scanf("%d", &e);
            int z = e - 100;
            if(z + 100 == pid[z]) {
	           	printf("\nDigite o novo nome de [%s] PID [%d]: ", nome[z], pid[z]);
	            scanf("%s", nome[e - 100]);
	            printf("\n\nNOME do processo [%s] PID [%d] com [%d] execuções, alterado com sucesso!\n\n", nome[z], pid[z], exec[z]);
            } else {
            	printf("\nPID não encontrado!\n");
            	goto procurando;
            }

            break;

	    	case 2:
	    	printf("\n\n");
	    	printf("--- Alterando Execuções ---\n\n");
	    	procurando2:
            printf("Digite o PID do processo: ");
            scanf("%d", &e);
            z = e - 100;
            if(z +100 ==pid[z]) {
	           	valor_positivo:
	            printf("Digite a nova quantidade de execuções de [%s] PID [%d]: ", nome[z], pid[z]);
	            scanf("%d", &exec[e - 100]);

	           	if(exec[z] <= 0) {
		    	printf("\nValor inválido, digite um valor positivo maior que 0!\n");
		    	goto valor_positivo;
	            }

            	printf("\n\nExecuções do processo [%s] PID [%d], alterado com sucesso! ([%d] EXECUÇÕES)\n\n", nome[z], pid[z], exec[z]);
	    	}else {
            	printf("\nPID não encontrado!\n");
            	goto procurando2;
            }

            break;

	    	case 0:
	    	manipulacao();

	    	default:
	    	printf("Digite uma opção válida!\n");
	    }
	}while(op);

}

void remover_processo() {

	system("cls");

	printf("\n\n");
	printf("--- Remover Processo ---\n\n");
    printf("Digite o PID para eliminar: ");
    scanf("%d", &remover);

    for (r = 0; r < i; r++) {
	    if (remover == pid[r]) {
		    memset(&nome[remover - 100], 0, sizeof(nome[remover - 100]));
		    memset(&exec[remover - 100], 0, sizeof(exec[remover - 100]));
		    memset(&pid[remover - 100], 0, sizeof(pid[remover - 100]));
		    printf("\n\nProcesso removido com sucesso!\n");
		    max = max - 1;
	    }

	 	if (remover >= i + 100) {
	     	printf("PID INVALIDO!\n");
		}
	}

	opcao();

}

void tabela() {

	printf("\n---------------------- TABELA DE PROCESSOS --------------------\n");
	printf("\n\t\tNome\t|\tPID\t|\tExecuções\n");
    for (int x = 0; x < i; x++) {
        if (pid[x] != 0) {
            printf("\n\t\t%s\t\t%d\t\t%d\n", nome[x], pid[x], exec[x]);
        }
    }

    printf("\n---------------------------------------------------------------\n\n");

	opcao();

}

void limpar() {

	system("clear");

	for (q = 0; q < i; q++) {
	    if (remover == pid[q]) {
	        memset(&nome[remover - 100], 0, sizeof(nome[remover - 100]));
	        memset(&exec[remover - 100], 0, sizeof(exec[remover - 100]));
	        memset(&pid[remover - 100], 0, sizeof(pid[remover - 100]));
	    }
    }

    i = 0;

    printf("\n\n");
	printf("\t\tTabela Limpa!\n");

	opcao();

}

void escalonamento() {

	system("cls");

	do {
		printf("\n\n");
	 	printf("[1] Executar uma vez\n");
	    printf("[2] Executar ate o fim\n");
	    printf("[0] Voltar\n");
	    printf("-> ");

	    scanf("%d", &op);

	    switch(op) {

		   	case 1:
			executar_um();
			break;

		    case 2:
		    executar_tudo();
			break;

			case 0:
			menu();

			default:
			printf("Digite uma opção válida!\n");
		}

	}while(op);
}

void executar_um() {

	printf("\n---------------------- TABELA DE PROCESSOS --------------------\n");
	printf("\n\t\tNome\t|\tPID\t|\tExecutado\n");
    for (int x = 0; x < i; x++) {
        if (pid[x] != 0) {
            printf("\n\t\t%s\t\t%d\t\t%d\n", nome[x], pid[x], exec[x]);
        }
    }

    printf("\n\n");

    for (q = 0; q < i; q++) {
        if (exec[q] >= 1) {
            exec[q] = exec[q] - 1;
            fim[q] = exec[q];
        }
    }

    printf("\n------------------------ PÓS EXECUÇÃO -------------------------\n");
    printf("\n\t\tNome\t|\tPID\t|\tFim\n");
    for (r = 0; r < i; r++) {
        if (pid[r] >= 1) {
            printf("\n\t\t%s\t\t%d\t\t%d\n", nome[r], pid[r], fim[r]);
        }
    }
    printf("\n---------------------------------------------------------------");

}

void executar_tudo() {
	int maior=0;

	maior = exec[0];
	for (r = 0; r < i; r++) {
		if (exec[r] > maior) {
		      	maior = exec[r];
		 }
	}

	printf("\n---------------------- TABELA DE PROCESSOS --------------------\n");
	for (p = 0; p <= maior; p++) {
	    for (q = 0; q < i; q++) {
	        if (exec[q] >= 0) {
	        	exec[q] = exec[q]	;
			    fim[q] = exec[q];

			    printf("\n\t\tNome\t|\tPID\t|\tFim\n");
			    printf("\t\t%s\t\t%d\t\t%d\n\n", nome[q], pid[q], fim[q]);
			    exec[q] = exec[q] - 1;
			}
	    }
	}

	printf("\n-------------------------- FINALIZADO -------------------------\n");
	printf("\n\t\tNome\t|\tPID\t|\tExecuções\n");

	for (r = 0; r < i; r++) {
		if (pid[r] >= 0) {
		    printf("\n\t\t%s\t\t%d\t\t%d\n", nome[r], pid[r], fim[r]);
		}
	}
	printf("\n---------------------------------------------------------------");

}

void copy() {

	system("cls");
	system("color 0F");


	printf("\n\n");
	printf("**************************************************\n");
	printf(" Simulador de Gerenciamento da Fila de Prontos\n");
    printf(" Projeto de Sistemas Operacionais I - 2º Semestre\n");
    printf(" Fatec Americana\n");
    printf("\n\n");
   	printf(" Matheus Jediel Ferreira\n\n");
   	printf("\t\tAmericana - 2020\n");
   	printf("**************************************************\n");

	opcao();

}

void opcao() {

	do {
		printf("\n\n");
		printf("[1] Retornar ao Menu e Manipulação\n");
		printf("[0] Retornar ao Menu Principal\n");
		printf("-> ");

		scanf("%d", &op);

		switch(op) {

			case 1:
			manipulacao();

			case 0:
			menu();

			default:
			printf("Digite uma opção válida!\n");
		}
	}while(op);

}

int main() {

	setlocale(LC_ALL, "Portuguese");

	menu();

	return 0;
}
