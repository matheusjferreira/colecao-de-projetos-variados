#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "funcoes.h"


int op;
char xadrez[9][9] =

{
	'0', '1', '2', '3', '4', '5', '6', '7', '8',
	'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
	'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
	'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
	'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
	'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'
};

void menu() {

    do {

    	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    	printf("\n");
	    printf("\t\t____  ___           .___                               \n");
		printf("\t\t\\   \\/  /____     __| _/______   ____ ________       \n");
		printf("\t\t \\     /\\__  \\   / __ |\\_  __ \\_/ __ \\___    /    \n");
		printf("\t\t /     \\ / __ \\_/ /_/ | |  | \\/\\  ___/ /    /     \n");
		printf("\t\t/___/\\  (____  /\\____ | |__|    \\___  >_____ \\     \n");
	    printf("\t\t      \\_/    \\/      \\/             \\/      \\/    \n");
	    printf("\n\n\n");

		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("		           .                                                               \n");
        printf("                         .   .                                                     \n");
        printf("                        /  .  \\                                                   \n");
        printf("                       /       /                                                   \n");
        printf("                      /.     ./  /\\           BEM VINDO                           \n");
        printf("                     |. .   ./__/. |                                               \n");
        printf("                      \\. .       ./                    AO                         \n");
        printf("                       \\.   .   ./                                                \n");
        printf("                        \\.   . ./                  JOGO DE XADREZ!                \n");
        printf("                         \\. . ./                                                  \n");
        printf("                         ========                                                  \n");
        printf("                       ------------                                                \n");
        printf("                      ==============                                               \n");
        printf("                        \\        /                                                \n");
        printf("                         |      |                                                  \n");
        printf("                         |      |                                                  \n");
        printf("                         |      |                                                  \n");
        printf("                         ;      `                                                  \n");
        printf("                        /        \\                                                \n");
        printf("                       /          \\                              [1] Jogar        \n");
        printf("                      /            \\                             [2] Copyright    \n");
        printf("                      `      .      '                            [0] Sair          \n");
        printf("                      \\=============/                                             \n");

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("                                                       (ALT+ENTER para modo janela)\n\n\n");
        printf("                                                                           ---> ");

		verificar_op_menu(&op);

		switch(op) {
			case 1:
			jogar();

			case 2:
			system("cls");
			copy();
			break;

			case 0:
			exit(1);

		}
	}while(op);
}

int pintartabuleiro() {

	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int linha, coluna, r, i = 1;

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf("\t\t\t\t\t*** PARTIDA EM EXECU%c%cO ***\n", 128, 199);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\n  W   H   I   T   E        P   L   A   Y   E   R\n\n");


	for(linha = 0; linha < 9; linha++) {
		for(r = 0; r < 3; r++) {
			for(coluna = 0; coluna < 9; coluna++) {
				char peca = xadrez[linha][coluna];
				char letra = ((linha + coluna) %2 == 1 && (coluna != 0 && linha != 0)) ? '\xB2' : ' ';
				letra = (r == 1 && peca != ' ') ? peca : letra;

				if((linha + coluna) %2 == 1 && peca != '1' && peca != '3' && peca != '5' && peca != '7') {

					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
					printf("\xB2\xB2%c\xB2\xB2", letra);

				}else {

					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
					printf("  %c  ", letra);

				}

				if(r == 1 && coluna > 7 && linha == 0) {
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
					printf("  X       ---> Digite coordenadas de origem 273 32 para declarar empate, e -459 -273 para desistir.");
				}
				if(r == 1 && coluna > 7 && linha > 0) {

					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
					printf("  %d  ", i );
					i++;

				}
			}
			printf("\n");
		}
	}

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\n  0    1    2    3    4    5    6    7    8    X\n\n");

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf("\n  B   L   A   C   K        P   L   A   Y   E   R\n");


}

void jogar() {

	int linha_origem = 0, linha_destino = 0, coluna_origem = 0, coluna_destino = 0;

	while(1) {

		pintartabuleiro();

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\nInforme o numero da linha de ORIGEM: ");
		verificar_lin_ori(&linha_origem);

		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\nInforme o numero da coluna de ORIGEM: ");
		verificar_col_ori(&coluna_origem);


		if((linha_origem == 373) && (coluna_origem == 212)) {
			system("cls");
			menu();
		}

		if((linha_origem == 273) && (coluna_origem == 32)) {

			pintartabuleiro();

			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\n\n\n       E   M   P   A   T   E   !   !   !   !\n\n\n\n");

			system ("pause");
			system("cls");
			menu();

		}

		if((linha_origem == -459) && (coluna_origem == -273)) {
			pintartabuleiro();

			do {
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				printf("\n\n\n\t\tQual jogador est%c desistindo?\n\n", 160);
				printf("\t\t[1] W H I T E\n\n");
				printf("\t\t[2] B L A C K\n\n");
				printf("\t\t         ---> ");
				scanf("%d", &op);

				switch(op) {
					case 1:
					black_wins();

					case 2:
					white_wins();

					default:
					printf("Opcao inv%clida!\n", 160);
				}
			}while(op);
		}

		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\nInforme o numero da linha de DESTINO: ");
		verificar_lin_des(&linha_destino);

		SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\nInforme o numero da coluna de DESTINO: ");
		verificar_col_des(&coluna_destino);


		int resultado = moverpeca(linha_origem, linha_destino, coluna_origem, coluna_destino);

		switch(resultado) {

			case 1:
			break;

			case 9:
        	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\nERRO: Movimento inv%clido!\n", 160);
			system("pause");
			break;

			case 0:
        	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("\nERRO: Coordenadas Inv%clidas!\n", 160);
			system("pause");
			break;

		}

	}

}

int moverpeca(int linha_origem, int linha_destino, int coluna_origem, int coluna_destino) {

	int mover = 0;
	char peca, peca_alvo;
	int dv = abs(linha_destino - linha_origem);
	int dh = abs(coluna_destino - coluna_origem);

	if( (linha_origem >= 1 && linha_origem < 9 && coluna_origem >= 1 && coluna_origem < 9) && (linha_destino >= 1 && linha_destino < 9 && coluna_destino >= 1 && coluna_destino < 9) ) {

		peca = xadrez[linha_origem][coluna_origem];
		peca_alvo = xadrez[linha_destino][coluna_destino];


		if ((peca == 'r') && ( dv == 0 || dh == 0 ) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'K' || peca_alvo == 'P') ) {
			mover = 1;
		}

		if( (peca == 'R') && (dv == 0 || dh == 0) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'k' || peca_alvo == 'p') ) {
			mover = 1;
		}

		if( (peca == 'b') && (dv == dh) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'K' || peca_alvo == 'P') ) {
			mover = 1;
		}

		if( (peca == 'B') && (dv == dh) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'k' || peca_alvo == 'p') ) {
			mover = 1;
		}

		if( (peca == 'n') && ((dv == 1 && dh == 2) || (dv == 2 && dh == 1)) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'K' || peca_alvo == 'P') ) {
			mover = 1;
		}

		if( (peca == 'N') && ((dv == 1 && dh == 2) || (dv == 2 && dh == 1)) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'k' || peca_alvo == 'p') ) {
			mover = 1;
		}

		if( (peca == 'q') && ((dv == dh) || (dv == 0) || (dh == 0)) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'K' || peca_alvo == 'P') ) {
			mover = 1;
		}

		if( (peca == 'Q') && ((dv == dh) || (dv == 0) || (dh == 0)) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'k' || peca_alvo == 'p') ) {
			mover = 1;
		}

		if(peca == 'k') {

			if((linha_origem == 1 && coluna_origem == 5) && (linha_destino == 1 && coluna_destino == 8) || (linha_destino == 1 && coluna_destino == 1) ) {

				if(peca_alvo == 'r') {

					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = 'r';

					jogar();
				}

			}else if( (dv >= 0 && dv <= 1) && (dh >= 0 && dh <= 1) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'P') ){
				mover = 1;
			}

		}

		if(peca == 'K') {

			if((linha_origem == 8 && coluna_origem == 5) && (linha_destino == 8 && coluna_destino == 8) || (linha_destino == 8 && coluna_destino == 1) ) {

				if(peca_alvo == 'R') {

					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = 'R';

					jogar();
				}

			}else if( (dv >= 0 && dv <= 1) && (dh >= 0 && dh <= 1) && (peca_alvo == '\xB2' || peca_alvo == ' ' || peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'p') ) {
				mover = 1;
			}

		}

		if( (peca == 'p') ) {

			if(linha_destino == 4) {

				if(((linha_destino - linha_origem) == 2) && (dh == 0) && (peca_alvo == '\xB2' || peca_alvo == ' ')) {

				mover = 1;

				}

			}

			if((linha_destino - linha_origem) == 1) {

				if((dh == 0)) {

					if(peca_alvo == '\xB2' || peca_alvo == ' ') {

					mover = 1;

					}

				}

				if(dv == 1 && dh == 1) {

					if(peca_alvo == 'R' || peca_alvo == 'N' || peca_alvo == 'B' || peca_alvo == 'Q' || peca_alvo == 'K' || peca_alvo == 'P') {

					mover = 1;

					}

				}

			}

			if(linha_destino == 8) {

				do {
					printf("\nEscolha: [1] Rainha, [2] Bispo, [3] Cavalo, [4] Torre: ");
					scanf("%d", &op);

					switch(op) {
					case 1:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'q';

					jogar();

					case 2:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'b';
					jogar();

					case 3:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'n';
					jogar();

					case 4:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'r';
					jogar();

					default:
					printf("Opcao invalida!\n");

					}
				}while(op);

			}

		}

		if( (peca == 'P') ) {

			if(linha_destino == 5) {

				if(((linha_destino - linha_origem) == -2) && (dh == 0) && (peca_alvo == '\xB2' || peca_alvo == ' ')) {

				mover = 1;

				}

			}

			if((linha_destino - linha_origem) == -1) {

				if((dh == 0)) {

					if(peca_alvo == '\xB2' || peca_alvo == ' ') {

					mover = 1;

					}

				}

				if(dv == 1 && dh == 1) {

					if(peca_alvo == 'r' || peca_alvo == 'n' || peca_alvo == 'b' || peca_alvo == 'q' || peca_alvo == 'k' || peca_alvo == 'p') {

					mover = 1;

					}

				}

			}

			if(linha_destino == 1) {

				do {
					printf("\nEscolha: [1] Rainha, [2] Bispo, [3] Cavalo, [4] Torre: ");
					scanf("%d", &op);

					switch(op) {
					case 1:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'Q';

					jogar();

					case 2:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'B';
					jogar();

					case 3:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'N';
					jogar();

					case 4:
					xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
					xadrez[linha_origem][coluna_origem] = ' ';
					xadrez[linha_destino][coluna_destino] = 'R';
					jogar();

					default:
					printf("Opcao invalida!\n");

					}
				}while(op);

			}

		}

		if(mover) {

			char xeque_mate = xadrez[linha_destino][coluna_destino];

			if(xeque_mate == 'K') {

				xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
				xadrez[linha_origem][coluna_origem] = ' ';

				pintartabuleiro();

				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("\n\n\n      X   E   Q   U   E   -   M   A   T   E\n\n\n\n");

				system ("pause");

				white_wins();
			}else if(xeque_mate == 'k') {

				xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
				xadrez[linha_origem][coluna_origem] = ' ';

				pintartabuleiro();

				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("\n\n\n      X   E   Q   U   E   -   M   A   T   E\n\n\n\n");

				system ("pause");

				black_wins();
			}

			xadrez[linha_destino][coluna_destino] = xadrez[linha_origem][coluna_origem];
			xadrez[linha_origem][coluna_origem] = ' ';

			return 1;
		}else {
			return 9;
		}

	}else {
		return 0;
	}

}

void white_wins() {

	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	printf("\n\n\n\n\n");
	printf("                     o                          \n");
    printf("                   /\\^/\\                      \n");
    printf("                  |  /  )                       \n");
    printf("                  | /  /                        \n");
    printf("                   Y  /                         \n");
    printf("                   |  |                         \n");
    printf("                   |  |                         \n");
    printf("                  /    \\                       \n");
    printf("      ___________|______|___________            \n");
    printf("     |                              |           \n");
    printf("     |   WHITE IS THE CHAMPION!!!   |           \n");
    printf("     |       CONGRATULATIONS!!!     |           \n");
    printf("     |______________________________|           \n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("\n\n\nEncerrando...\n");

	system("pause");

	exit(1);

}

void black_wins() {

	system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	printf("\n\n\n\n\n");
	printf("                     o                          \n");
    printf("                   /\\^/\\                      \n");
    printf("                  |  /  )                       \n");
    printf("                  | /  /                        \n");
    printf("                   Y  /                         \n");
    printf("                   |  |                         \n");
    printf("                   |  |                         \n");
    printf("                  /    \\                       \n");
    printf("      ___________|______|___________            \n");
    printf("     |                              |           \n");
    printf("     |   BLACK IS THE CHAMPION!!!   |           \n");
    printf("     |       CONGRATULATIONS!!!     |           \n");
    printf("     |______________________________|           \n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\n\n\nEncerrando...\n");

	system("pause");

	exit(1);

}

void copy() {

	do {

        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("\n");
        printf("\t\t_________                    .___.__  __                     \n");
        printf("\t\t\\_   ___ \\_______   ____   __| _/|__|/  |_  ______         \n");
        printf("\t\t/    \\  \\/\\_  __ \\_/ __ \\ / __ | |  \\   __\\/  ___/    \n");
        printf("\t\t\\     \\____|  | \\/\\  ___// /_/ | |  ||  |  \\___ \\      \n");
        printf("\t\t \\______  /|__|    \\___  >____ | |__||__| /____  >         \n");
        printf("\t\t        \\/             \\/     \\/               \\/         \n");
        printf("\n\n\n");

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\n\n\t*************************************************************************\n\n\n");;
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf("\t\t\tMatheus Jediel Ferreira. Americana - 2020\n\n\n");
		printf("\t\t   |\\_      \n");
        printf("\t\t  /  .\\_    \n");
        printf("\t\t |   ___)    \n");
        printf("\t\t |    \\     \n");
        printf("\t\t |  =  |     \n");
        printf("\t\t /_____\\    \n");
    	printf("\t\t[_______]    Art by Petey Kossits & Brent James Benton\n\n");
    	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\t*************************************************************************\n\n\n");
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		printf("                                                                 [1] Voltar\n");
		printf("                                                                 [0] Sair\n\n\n\n\n");

   SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
		printf("\n                                                                           ---> ");

		verificar_op_copy(&op);

		switch(op) {
			case 1:
			system("cls");
			menu();

			case 0:
			exit(1);

		}
	}while(op);
}

void verificar_op_menu(int* op) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    if(scanf("%d", &*op) != 1 || *op < 0 || *op > 2) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("\n\n\n\t\tN%co insira letras, n%cmeros negativos, ou valor maior que 2!\n\n\n\n\t\t\t", 198, 163);
        system("pause");
        system("cls");
        menu();
    }

}

void verificar_op_copy(int* op) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    if(scanf("%d", &*op) != 1 || *op < 0 || *op > 1) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("\n\n\n\t\tN%co insira letras, n%cmeros negativos, ou valor maior que 1!\n\n\n\n\t\t\t", 198, 163);
        system("pause");
        system("cls");
        copy();
    }

}

void verificar_lin_ori(int* linha_origem) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    while(scanf("%d", &*linha_origem) != 1) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("Digite somente n%cmeros: ", 163);
    }
    return (void)linha_origem;

}

void verificar_col_ori(int* coluna_origem) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    while(scanf("%d", &*coluna_origem) != 1) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("Digite somente n%cmeros: ", 163);
    }
    return (void)coluna_origem;

}

void verificar_lin_des(int* linha_destino) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    while(scanf("%d", &*linha_destino) != 1) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("Digite somente n%cmeros: ", 163);
    }
    return (void)linha_destino;

}

void verificar_col_des(int* coluna_destino) {

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    while(scanf("%d", &*coluna_destino) != 1) {
        static char temp[256];
        fgets(temp, sizeof(temp), stdin);
        printf("Digite somente n%cmeros: ", 163);
    }
    return (void)coluna_destino;

}

int main() {

	keybd_event(VK_MENU,0x38, 0, 0);
    keybd_event(VK_RETURN,0x1c,0,0);
    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);

	menu();

    return 0;
}
