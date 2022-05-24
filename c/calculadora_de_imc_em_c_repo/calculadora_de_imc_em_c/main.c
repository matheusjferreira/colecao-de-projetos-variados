#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 0F");

    int i, j, x, z, ano=0, nascimento=0;
    char nome[25];
    float altura=0, peso=0, _IMC=0;
    printf("\t\t********BEM VINDO AO PROGRAMA DE ANALISE DE INDICE DE MASSA CORPORAL********");

    printf("\n\nPressione qualquer tecla para continuar");
    system("pause");

    system("cls");

    for(i=0;i<1;i++){
    printf("Para comecar vamos calcular a sua idade;\n\nInforme em que ano estamos:\n");
    scanf("%i", &ano);

    printf("\n\nInforme o ano do seu nascimento:\n");
    scanf("%i", &nascimento);
        for(z=0;z<1;z++){
            printf("\n\nInforme o seu nome:\n");
            scanf("%s", &nome);
        }
            for(j=0;j<1;j++){
                printf("\n\nInforme a sua altura:\n");
                scanf("%f", &altura);
            }
                for(x=0;x<1;x++){
                    printf("\n\nInforme o seu peso:\n");
                    scanf("%f", &peso);
                }
    system("cls");
    printf("Segue os dados recebidos para confencia:\n\nNOME:%s;\n\nIDADE:%i;\n\nALTURA:%.2f;\n\nPESO:%.2f;\n\n", nome, nascimento = (ano-nascimento), altura, peso);
    _IMC = peso/(altura*altura);
    printf("Resultado calculo de IMC (INDICE DE MASSA CORPORAL):%.2f\n\n", _IMC);
    if(_IMC<17)
    {
        printf("Muito abaixo do peso.\n");
    }
    else
    {
        if(_IMC>17 && _IMC<18.49)
        {
            printf("Abaixo do peso.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<24.99)
            {
                printf("Peso normal.\n");
            }
            else
            {
                if(_IMC>25 && _IMC<29.99)
                {
                    printf("Acima do peso.\n");
                }
                else
                {
                    if(_IMC>30 && _IMC<34.99)
                    {
                        printf("voce esta Obeso.\n");
                    }
                    else
                    {
                        if(_IMC>35 && _IMC<39.99)
                        {
                            printf("Obesidade Severa.\n");
                        }
                        else
                        {
                            if(_IMC>40)
                            {
                                printf("voce esta em Obesidade GRAVE.\n");
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n\n*****TABELA IMC*****\n\nMagreza:18,5\nNormal: 18,5 a 24,9\nSobrepeso:25,0 a 29,9\nObesidade:30,0 a 39,9\nObesidade Grave:40,0+\n");
    }



return 0;
}
