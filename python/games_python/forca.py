import random

def jogar():

    abertura()
    palavra_secreta = carregando_palavra()
    letras_acertadas = inicializa_letras_acertadas(palavra_secreta)

    print(letras_acertadas)

    enforcou = False
    acertou = False
    erros = 0

    while(not enforcou and not acertou):

        chute = inserindo_chute()

        if(chute in palavra_secreta):
            marca_chute_correto(palavra_secreta, chute, letras_acertadas)
        else:
            erros += 1
            desenha_forca(erros)

        enforcou = erros == 7
        acertou = '_' not in letras_acertadas
        print(letras_acertadas)


    if(acertou):
        msg_vitoria()
    else:
        msg_derrota(palavra_secreta)
    print('Fim do jogo')

def abertura():
    print('###############################')
    print('# BEM VINDO AO JOGO DE FORCA! #')
    print('###############################')

def carregando_palavra():
    arquivo = open('palavras.txt', 'r')
    palavras = []

    for linha in arquivo:
        linha = linha.strip()
        palavras.append(linha)
    
    arquivo.close()

    numero = random.randrange(0,len(palavras))
    palavra_secreta = palavras[numero].upper()
    return palavra_secreta

def desenha_forca(erros):
    print("  _______     ")
    print(" |/      |    ")

    if(erros == 1):
        print(" |      (_)   ")
        print(" |            ")
        print(" |            ")
        print(" |            ")

    if(erros == 2):
        print(" |      (_)   ")
        print(" |      \\     ")
        print(" |            ")
        print(" |            ")

    if(erros == 3):
        print(" |      (_)   ")
        print(" |      \\|    ")
        print(" |            ")
        print(" |            ")

    if(erros == 4):
        print(" |      (_)   ")
        print(" |      \\|/   ")
        print(" |            ")
        print(" |            ")

    if(erros == 5):
        print(" |      (_)   ")
        print(" |      \\|/   ")
        print(" |       |    ")
        print(" |            ")

    if(erros == 6):
        print(" |      (_)   ")
        print(" |      \\|/   ")
        print(" |       |    ")
        print(" |      /     ")

    if (erros == 7):
        print(" |      (_)   ")
        print(" |      \\|/   ")
        print(" |       |    ")
        print(" |      / \\   ")

    print(" |            ")
    print("_|___         ")
    print()

def inicializa_letras_acertadas(palavra):
    return ['_' for letra in palavra]

def inserindo_chute():
    chute = input('Qual letra? ')
    chute = chute.strip().upper()
    return chute

def marca_chute_correto(palavra_secreta, chute, letras_acertadas):
    index = 0
    for letra in palavra_secreta:
        if(chute == letra):
            letras_acertadas[index] = letra
        index += 1

def msg_vitoria():
    print('PARABENS VOCE GANHOU!')
    print('	    _______________     ')
    print('    |@@@@|     |####|    ')
    print('    |@@@@|     |####|    ')
    print('    |@@@@|     |####|    ')
    print('    \\@@@@|     |####/   ')
    print('     \\@@@|     |###/    ')
    print('      `@@|_____|##       ')
    print('           (O)           ')
    print('        .-`````-.        ')
    print('      .`  * * *  `.      ')
    print('     :  *       *  :     ')
    print('    : ~ A S C I I ~ :    ')
    print('    : ~ M E D A L ~ :    ')
    print('     :  *       *  :     ')
    print('      `.  * * *  .`      ')
    print('        `-.....-`        ')

def msg_derrota(palavra_secreta):
    print(' VOCE FOI ENFORCADO!\n')
    print(f' A PALAVRA SECRETA ERA: {palavra_secreta}\n')
    print('                      :::!~!!!!!:.            ')
    print('                  .xUHWH!! !!?M88WHX:.        ')
    print('                .X*#M@$!!  !X!M$$$$$$WWx:.    ')
    print('               :!!!!!!?H! :!$!$$$$$$$$$$8X:   ')
    print('              !!~  ~:~!! :~!$!#$$$$$$$$$$8X:  ')
    print('             :!~::!H!<   ~.U$X!?R$$$$$$$$MM!  ')
    print('             ~!~!!!!~~ .:XW$$$U!!?$$$$$$RMM!  ')
    print('               !:~~~ .:!M"T#$$$$WX??#MRRMMM!  ')
    print('               ~?WuxiW*`   `"#$$$$8!!!!??!!!  ')
    print('             :X- M$$$$       `"T#$T~!8$WUXU~  ')
    print('            :%`  ~#$$$m:        ~!~ ?$$$$$$   ')
    print('          :!`.-   ~T$$$$8xx.  .xWW- ~""##*"   ')
    print('.....   -~~:<` !    ~?T#$$@@W@*?$$      /`    ')
    print('W$@@M!!! .!~~ !!     .:XUW$W!~ `"~:    :      ')
    print('#"~~`.:x%`!!  !H:   !WM$$$$Ti.: .!WUn+!`      ')
    print(':::~:!!`:X~ .: ?H.!u "$$$B$$$!W:U!T$$M~       ')
    print('.~~   :X@!.-~   ?@WTWo("*$$$W$TH$! `          ')
    print('Wi.~!X$?!-~    : ?$$$B$Wu("**$RM!             ')
    print('$R@i.~~ !     :   ~$$$$$B$$en:``              ')
    print('?MXT@Wx.~    :     ~"##*$$$$M~                ')
    

if(__name__ == '__main__'):
    jogar()