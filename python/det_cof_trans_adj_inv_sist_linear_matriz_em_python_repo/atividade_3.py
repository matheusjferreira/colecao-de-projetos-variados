#Leonardo Linarello
#Guilherme Moriggi
#Matheus Ferreira
#Miguel Fernandes
#Renan de Souza


def montarMatrizQuadrada(rowCol):
    print('--------------Montando Matriz Quadrada------------')
    print('')
    matriz = []

    for i in range(rowCol):
        sub_matrix = []
        for j in range(rowCol):
            sub_matrix.append(int(input(f'linha {i} coluna {j} : ')))
        matriz.append(sub_matrix)

    return matriz 

def montarVetor(numeroValores):
    print('')
    print('-----------Montando Vetor de Resultados: ---------')
    print('')
    vetor = []

    for i in range(numeroValores):
        vetor.append(int(input(f'Insira o valor {i} : ')))

    return vetor

def sistema_linear():
    print('############################## A T I V I D A D E   P Y T H O N ##################################')
    print('#                                                                                               #')
    print('#                        :IQQBQBQBQg5v.                                                         #')
    print('#                   BBDjQBBQQQBBBBBM                                                            #')
    print('#                  iBd   BggZDZgZgQBI                                                           #')
    print('#                  iBBPUBBBQMEDEDDgBI                                                           #')
    print('#                   7i7vr:::PREgZgDBj                                                           #')
    print('#            .7J1Js7i:i:::::EMDZgDMQu .::..                       UQ                            #')
    print('#           PBQBQBBBBBBBQBBBMgZDDggBu :i:iii                  iB  1Q                            #')
    print('#          dBggEDZgDgDggMggggDgDMgQBU ::::::i  .57vE7 .M   UJ PBr vBivdu  YSYSj  vvrXg          #')
    print('#         .BgDdZEDEgDQQBBBBBBBBBBBQB  ::::::i. BP   B .B   gD :B  YB   B LB   Bj B   Bu         #')
    print('#         rBgdDEDdgBBBQMQQQQQRQQQEY  :::::::i. MJ   B:.B   SP iB  1M   Q dD   Pg B   Qu         #')
    print('#         rBgZEDEgBQ.               ::::::::i. Dg. 5B  Br..BX .B. 5B   B. Qi :Q .B   BI         #')
    print('#         iBMEDZgQQ   ..........::::::::::::r. gd.7r    7: gK  .r ..   :   iri   :   :.         #')
    print('#          BQgZDgB: .:.:.:.:.:.::::::::::::ir  BX         :B.                                   #')
    print('#          YBBQgQB: :.:.:.:.::::::::::::i:rr:  ..       .7i                                     #')
    print('#           7BBBBBr ::.:.::::::::i:iirirrri.                                                    #')
    print('#             ..::  :.:.::::                                                                    #')
    print('#                   ::.::::::::iiiii.                                                           #')
    print('#                   i:::::::::i.  :r:                                                           #')
    print('#                   ii:::::::::.  :Y.                                                           #')
    print('#                    .iiriiiiirr7rr.                                                            #')
    print('#                        .......                                                                #')
    print('#                                                                                               #')
    print('#          v               .7                                                                   #')
    print('#         Lu               JL:                                                                  #')
    print('#         D212Iugi   PsU21UbX7                                                                  #')
    print('#           7vriB.  7dJ7i::.i                                                                   #')
    print('#               Q   EY7                                                           ..            #')
    print('#              uu   dJ  rBBBBBBBBBBr    BBBBr   :BBBBBBBQBBBB rBBBBBBBBBBB.   YBBBBBQB1         #')
    print('#              B   7Ss  QBBP2u52SqK:   QBBBBE   .1XJ2BBBK5SPv gBBPI1IU52PJ. :BBBBq2jQBBB.       #')
    print('#             .B   EY7  BBg           gBBvMBQ.      :BBd.     QBg.         .BBBu.    XBBU       #')
    print('#             XL  .bJ  7BBMLrrrrY:   dBB7 5BBi      gBBY     rBQQ51Juu2K.  BBBU.                #')
    print('#             B   YIJ  QBBBBBBBBBB  SBQi  .BBu      BBBi     QBBQBQBBBBBs  BBQ:                 #')
    print('#            .R   ZYr  BBMr::::::  IBBRK5uPBBd.    vBBd.     BBg:     ... .BBg.     .:.         #')
    print('#            q:  .bJ  JBBq.       JBBBBBBBBBBB:    BBBv.    vBBu           BQBv    :BBQu        #')
    print('#            B:..SJJ  BBBv       5BQD:. .  DBBs   :BBBi     BBBRZPEdDEQ5   :BQBQ25BBBBS:        #')
    print('#            iPZdqXr .BBQi      rBBQi      iBBq.  YBBD.    .QBBBQBQBBBBB:    SBBBBBBIi          #')
    print('#                                                                                               #')
    print('#################################################################################################')
    print('')
    linhasColunas = int(input('Informe o numero de linhas e colunas da matriz: \n'))
    return {
        'matrizValores' : montarMatrizQuadrada(linhasColunas),
        'vetorResultado' : montarVetor(linhasColunas),
    }

def zeros_matrix(rows, cols):
    Matriz = []
    while len(Matriz) < rows:
        Matriz.append([])
        while len(Matriz[-1]) < cols:
            Matriz[-1].append(0.0)

    return Matriz

def copy_matrix(Matriz):
    rows = len(Matriz)
    cols = len(Matriz[0])

    MatrizCopiada = zeros_matrix(rows, cols)

    for i in range(rows):
        for j in range(cols):
            MatrizCopiada[i][j] = Matriz[i][j]

    return MatrizCopiada

def determinante(matriz, total=0):
    indices = list(range(len(matriz)))

    if len(matriz) == 2 and len(matriz[0]) == 2:
        val = matriz[0][0] * matriz[1][1] - matriz[1][0] * matriz[0][1]
        return val

    for fc in indices:  
        matrizCopiada = matriz 
        matrizCopiada = matrizCopiada[1:]  
        altura = len(matrizCopiada)

        for i in range(altura):  
            matrizCopiada[i] = matrizCopiada[i][0:fc] + matrizCopiada[i][fc+1:]  

        sinal = (-1) ** (fc % 2) 
        determinante_secundaria = determinante(matrizCopiada)
        total += sinal * matriz[0][fc] * determinante_secundaria

    print('')
    print(f'Determinante : {total}')
    print('')

    if total == 0:
        exit(1)

    return total

def verifica_determinante(matriz):
    return determinante(matriz) != 0

def retornarMatrizSemColunaELinha(matriz, linha, coluna):
    return [row[:linha] + row[linha+1:] for row in (matriz[:coluna]+matriz[coluna+1:])]

def cofator(matriz):
    matrizCofactor = []

    for linha in range(len(matriz)):
        linhaCofator = []

        for coluna in range(len(matriz)):

            matrizMenor = retornarMatrizSemColunaELinha(matriz, linha, coluna)
            cofator = ((-1)**(linha+coluna)) * determinante(matrizMenor)

            print(f'cofator A{linha},{coluna} : {cofator}')
            linhaCofator.append(cofator)

        matrizCofactor.append(linhaCofator)
        
    print(cofator)
    return matrizCofactor

def transposta(matriz):
    result = []

    for l in range(len(matriz)):
        arrayAux = []

        for c in range(len(matriz[l])):
            arrayAux.append(matriz[c][l])
        result.append(arrayAux)

    return result

def adjunta(matriz):
    return transposta(cofator(matriz))

def inversa(matriz):
    determinant = determinante(matriz)

    if len(matriz) == 2:
        return [[matriz[1][1]/determinant, -1*matriz[0][1]/determinant], [-1*matriz[1][0]/determinant, matriz[0][0]/determinant]]

    matrizAdjunta = adjunta(matriz)

    novaMatrizInversa = []
    for r in range(len(matrizAdjunta)):
        linhaMatrizInversa = []

        for c in range(len(matrizAdjunta)):
            linhaMatrizInversa.append(matrizAdjunta[r][c]/determinant)
        novaMatrizInversa.append(linhaMatrizInversa)

    return novaMatrizInversa

def multiplicacao_matriz(matrizUm, matrizDois):

    if len(matrizUm[0]) != len(matrizDois) :
       return 'Numero de colunas da primeira matriz eh diferenca do numero de linhas da segunda matriz'

    matrizMultiplicada = []
    for linha in range(len(matrizUm)):
        linhaMatrizMultiplicada = []

        for coluna in range(len(matrizDois[0])):
            total = 0

            for segundaLinha in range(len(matrizUm[0])):
                total += matrizUm[linha][segundaLinha] * matrizDois[segundaLinha][coluna]
            linhaMatrizMultiplicada.append(total)

        matrizMultiplicada.append(linhaMatrizMultiplicada)

    return matrizMultiplicada

def main():    
    entradaDadosSistemaLinear = sistema_linear()
    
    matrizValores = entradaDadosSistemaLinear['matrizValores']
    matrizResultado = [entradaDadosSistemaLinear['vetorResultado']]

    print(multiplicacao_matriz(matrizResultado, inversa(matrizValores)))    

main()