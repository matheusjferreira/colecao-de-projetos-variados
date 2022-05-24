alphabeticalList = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "k" ,"L", "M", "N", "O", "P", "Q",
                    "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]

m = None
n = None

class variable:
    def __init__(self, label, value):
        self.label = label
        self.value = value

    def __lt__(self, other):
        return self.value < other.value

class Eta:
    def __init__(self, col, values):
        self.col = col
        self.values = values

def matrixPrint(r, c, matrix=[]):
    for R in range(r):
        for C in range(c):
            print(matrix[R * (m + n) + C], end="\t")
        print("")


def lpPrint(objectiveFunc=[], b=[], matrix=[]):
    print("m =", end=" ")
    print(m)
    print("n =", end=" ")
    print(n)
    print("c =", end=" [ ")
    for i in range(m + n):
        print(objectiveFunc[i], end=" ")
    print("]\nb =", end=" [ ")
    for i in range(m):
        print(b[i].value, end=" ")

    print("]\n A=")
    matrixPrint(m, n + m, matrix=matrix)

def BbarPrint(b=[]):
    print("Valor das variaveis", end=" ")
    for i in range(m):
        print(str(b[i].value)+alphabeticalList[i], end=" ")
    print()


def finalvariablePrint(b=[], nonbasic=[]):
    varVariables = [0] * (m + n)
    for row in range(m):
        varVariables[b[row].label] = b[row].value

    for col in range(n):
        varVariables[nonbasic[col]] = 0.0


def familyOfSolutionsPrint(d, largestCoeff, enterigLabel, z, b=[], nonbasic=[]):
    class varInfo:
        def __init__(label, value, row_in_basis, isBasic):
            self.label = label
            self.value = value
            self.row_in_basis = row_in_basis
            self.isBasic = isBasic

    info = [0] * (m + n)
    for row in range(m):
        v = b[row]
        info[v.label] = varInfo(v.label, v.value, row, true)

    for col in range(n):
        info[nonbasic[col]] = varInfo(nonbasic[col], 0.0, 0, false)

    print('Variáveis de decisão: ', end='')

    for i in range(n):
        print(i + 1, end=" ")
        print("= ", end="")
        print(info[i].value, end=" ")
        if info[i].isBasic:
            print("+ ", end="")
            print(d[info[i].row_in_basis] * (-1.0), end=" ")
            print("x", end=" ")
            print(enterigLabel + 1, end=" ")
    print()
    print('Variáveis de folga: ', end='')

    i = n
    while i < m + n:
        print(i + 1, end=" = ")
        print(info[i].value, end=" ")
        if info[i].isBasic:
            print("+ ", end="")
            print(d[info[i].row_in_basis] * (-1.0), end="x")
            print(enterigLabel + 1, end="")
        i = i + 1

    print(f"\nZ = {z} + {largestCoeff}x{enterigLabel + 1}", end=", ")
    print(f"com x{enterigLabel + 1} >= 0")

def simplex():
    global m
    global n

    m = int(input('\nInsira o numero de constantes:  '))

    n = int(input('Insira o numero de variaveis:  '))

    objectiveFunction = [0] * (m + n)

    for col in range(n):
        objectiveFunction[col] = float(input(f'Insira o coeficiente {col + 1} da função objetivo:  '))

    i = n
    while i < n + m:
        objectiveFunction[i] = 0.0
        i = i + 1

    A = [0] * (m * (n + m))

    b = [0] * (m)

    nonbasic = [0] * (n)

    for row in range(m):
        for col in range(n + 1):
            if col == n:
                bRow = float(input('Insira o valor (b) dessa constante:  '))
                x = n + row
                bVar = variable(x, bRow)
                b[row] = bVar
            else:
                A[row * (m + n) + col] = float(
                    input(f'Insira o coeficiente da {col + 1} variavel na constante   {row + 1}:  '))

    for row in range(m):
        base = (m + n) * row + n
        for col in range(m):
            if col != row:
                A[base + col] = 0.0
            else:
                A[base + col] = 1.0

    for i in range(n):
        nonbasic[i] = i

    for row in range(m):
        if b[row].value < 0.0:
            print('O PPL (programa de programação liner) é inviavel, saindo do programa')
            return

    counter = 1
    pivots = list()
    z = 0.0

    while True:
        print()
        print(f'Iteração {counter}')
        print()

        y = [0] * (m)

        for row in range(m):
            v = b[row]
            y[row] = objectiveFunction[v.label]
        for vector in reversed(pivots):
            pivot = vector
            changedCol = pivot.col
            originalY = y[changedCol]
            for row in range(len(pivot.values)):
                if row != changedCol:
                    originalY = originalY - pivot.values[row] * y[row]
            newY = originalY / pivot.values[changedCol]
            y[changedCol] = newY

        cnbars = list()

        enteringLabel = nonbasic[0]
        largestCoeff = -1.0

        for i in range(n):
            varLabel = nonbasic[i]
            cni = objectiveFunction[varLabel]
            yai = 0.0
            for yIndex in range(m):
                yai += y[yIndex] * A[yIndex * (m + n) + varLabel]

            cnbar = cni - yai
            if cnbar > 0.00001:
                v = variable(varLabel, cnbar)
                cnbars.append(v)
                if cnbar > largestCoeff:
                    largestCoeff = cnbar
                    enteringLabel = varLabel
        cnbars.sort(key=lambda v: v.value, reverse=True)
        print()

        entVarIndex = 0

        d = [0] * (m)
        leavingLabel = 0
        leavingRow = 0
        smallest_t = 0.0

        while True:
            leavingLabel = -1
            leavingRow = -1
            smallest_t - 1
            if entVarIndex > 0:
                print('O elemento diagonal na matriz eta é próximo de zero')

            if entVarIndex < len(cnbars):
                enteringLabel = cnbars[entVarIndex].label
                if entVarIndex > 0:
                    print(f'A variável de entrada é {enteringLabel + 1}')
            else:
                print(f'Sem entrada de variavel. O valor de Z ja foi atingido:\n')
                print(f'Final objetivo: Z = {z}')
                print('Valors ótimos:')
                for i in range(m):
                    print(str(b[i].value)+alphabeticalList[i], end=" ")
                print('\n\n')
                return
            for row in range(m):
                d[row] = A[row * (m + n) + enteringLabel]

            for i in pivots:
                pivot = i
                changedRow = pivot.col
                originalD = d[changedRow]
                d[changedRow] = originalD / pivot.values[changedRow]
                for row in range(len(d)):
                    if row != changedRow:
                        d[row] = d[row] - pivot.values[row] * d[changedRow]

            for row in range(len(d)):
                if d[row] > 0.0:
                    leavingLabel = b[row].label
                    leavingRow = row
                    smallest_t = b[row].value / d[row]

            if leavingLabel == -1:
                print('\nO problema é ilimitado')
                familyOfSolutionsPrint(d, largesCoeff, enterigLabel, z, b=b, nonbasic=nonbasic)
                return

            for row in range(len(d)):
                if d[row] < 0:
                    continue

                t_row = b[row].value / d[row]

                if t_row < smallest_t:
                    leavingLabel = b[row].label
                    leavingRow = row
                    smallest_t = t_row

            if d[leavingRow] > 0.000001:
                break
            else:
                entVarIndex = entVarIndex + 1
                continue

        enteringVar = variable(enteringLabel, smallest_t)
        b[leavingRow] = enteringVar

        for row in range(len(b)):
            if row != leavingRow:
                b[row].value = b[row].value - d[row] * smallest_t

        pivot = Eta(leavingRow, d)
        pivots.append(pivot)

        nonbasic[enteringLabel] = leavingLabel

        BbarPrint(b=b)

        increased = largestCoeff * smallest_t

        z = z + increased
        print(f'O valor da função objetivo Z: {z}')

        counter = counter + 1

def copy():
    print('#######################################################')
    print('#            Autor: Omar Khaled 11/11/2019            #')
    print('#                                                     #')
    print('#                   Alterado por:                     #')
    print('#                                                     #')
    print('#               Matheus Jediel Ferreira               #')
    print('#                                                     #')
    print('#                Bruno Silva Rodrigues                #')
    print('#                                                     #')
    print('#                                                     #')
    print('#   FATEC (Faculdade de Tecnologia), Americana - SP   #')
    print('#                  Copyright - 2020                   #')
    print('#######################################################')


def main():
    print('#######################################################')
    print('#           Programa de programação Linear            #')
    print('#                   MÉTODO SIMPLEX                    #')
    print('#######################################################')
    op = 0
    while op != 3:
        print('''[1] Calcular sistema linear (utilizando método simplex)
[2] Copyright
[3] Sair do programa''')
        op = int(input('''Qual é a sua opção?
----------------------------------------------------> '''))
        if op == 1: 
            simplex()
        elif op == 2:
            copy()
        elif op == 3:
            print('Finalizando...')
        else:
            print('Opção inválida, tente novamente...')
    print('Fim do programa.')

main()