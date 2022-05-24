import forca
import adivinhacao
import assinatura

def escolhe_jogo():
    print('###############################################')
    print('# BEM VINDO AOS JOGOS EM PYTHON - CURSO ALURA #')
    print('###############################################')

    print('[1] Forca [2] Adivinhação [3] Copyright [4]Sair')

    jogo = int(input('Selecione uma opcao: '))

    if(jogo == 1):
        print('Jogando forca')
        forca.jogar()
    elif(jogo == 2):
        print('Jogando adivinhação')
        adivinhacao.jogar()
    elif(jogo == 3):
        assinatura.copy()
        escolhe_jogo()
    elif(jogo == 4):
        exit
    elif(jogo != 1 or jogo != 2 or jogo != 3 or jogo != 4):
        print('\nOpcao invalida, tente novamente!: ')
        escolhe_jogo()

if(__name__ == '__main__'):
    escolhe_jogo()
