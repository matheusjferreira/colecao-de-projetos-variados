#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


int main() {

    printf("-------------------.::::.         BEM VINDO!                   \n");
    printf("-----------------.::::::::.                                    \n");
    printf("----------------:::::::::::       AO JOGO DE                   \n");
    printf("-------------,.:::::::::::'                                    \n");
    printf("----------':::::::::::::::     ADIVINHACAO <3                  \n");
    printf("------------.:::::::::::'                                      \n");
    printf("--------'::::::::::::::.                          1 A 99!      \n");
    printf("-------------,.:::::::::::.                                    \n");
    printf("----------``:::::::::::::::                                    \n");
    printf("-----------::::``::::::::'-----.:::.        TENTE              \n");
    printf("----------::::'--':::::'------.::::::::.     ME VENCER,        \n");
    printf("--------.::::'----:::::----.:::::::'::::.     SE FOR CAPAZ...  \n");
    printf("-------.:::'------:::::-.:::::::::'-':::::.     KKK            \n");
    printf("------.::'-------:::::.:::::::::'-----':::::.                  \n");
    printf("-----.::'-------::::::::::::::'--------``::::.                 \n");
    printf("-...:::---------::::::::::::'--------------``::.               \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {
        case 1:
            system("cls");
            numerodetentativas = 15;
            break;

        case 2:
            system("cls");
            numerodetentativas = 9;
            break;

        default:
            system("cls");
            numerodetentativas = 6;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou){
            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o numero secreto\n");
        }

        else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    printf("Fim de jogo!\n");

    if(acertou) {
        system("cls");
        printf("\n\n");
        printf("***************** VOCE GANHOU!!! *****************\n");
        printf("                         ..                       \n");
        printf("                      r. gB                       \n");
        printf("                      QB7 B                       \n");
        printf("  PARABENS NOVATO!      r::.                      \n");
        printf("                        r.iMU                     \n");
        printf("                       .P: 1Q:     nao ira        \n");
        printf("                        igPPir        vencer      \n");
        printf("                      .....  :r.        de novo!  \n");
        printf("                     i:.gE77KQj.                  \n");
        printf("                  :Bd   BBBBBQii                  \n");
        printf("                  :BQ   gBMQB..B                  \n");
        printf("                    U..RBQgRB 7Q                  \n");
        printf("                      XBBRDQB7K7                  \n");
        printf("                      :BBQRBBi                    \n");
        printf("                        7BBrqB:                   \n");
        printf("                      7::iB.uR:                   \n");
        printf("                     .ZPP:BgvPr                   \n");
        printf("                      riu.BM:Yi                   \n");
        printf("                      vug:B JPv                   \n");
        printf("                      SPBr. vgD                   \n");
        printf("                     :di.L.  KD:                  \n");
        printf("                     ig.     iDL                  \n");
        printf("                     7Z       Z1                  \n");
        printf("                     rS       uS                  \n");
        printf("                     rY       :E                  \n");
        printf("                     uP       iB.                 \n");
        printf("                     BB       YBi                 \n");
        printf("                               r                  \n");



        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        system("cls");
        printf("Voce perdeu! Tente de novo!\n");
        printf("\n\n");
        printf("                            ,--.                                \n");
        printf("                           {    }                               \n");
        printf("                           K,   }                               \n");
        printf("                          /  ~Y`                                \n");
        printf("                     ,   /   /                                  \n");
        printf("                    {_'-K.__/                                   \n");
        printf("                      `/-.__L._'                                \n");
        printf("                      /  ' /`\\_}                               \n");
        printf("                     /  ' /                                     \n");
        printf("             ____   /  ' /                                      \n");
        printf("      ,-'~~~~    ~~/  ' /_                                      \n");
        printf("    ,'             ``~~~  ',                                    \n");
        printf("   (                        Y                                   \n");
        printf("  {                         I                                   \n");
        printf(" {      -                    `,                                 \n");
        printf(" |       ',                   )                                 \n");
        printf(" |        |   ,,,__      __. Y                                  \n");
        printf(" |    .,_./  Y ' / ^Y   J   )|               GAME               \n");
        printf(" \\           |' /   |   |   ||                  OVER           \n");
        printf("  \\          L_/    . _ (_,.'(                                 \n");
        printf("   \\,   ,      ^^""' / |      )                                \n");
        printf("     \\_  \\          /,L]     /                                \n");
        printf("       '-_~-,       ` `   ./`                                   \n");
        printf("          `'{_            |                                     \n");
        printf("              ^^\\,,___,.--`                                    \n");
        printf("\n\n");
    }

    return 0;
}