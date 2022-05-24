       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL10.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER PRODUTO, VALOR E CALCULAR O FRETE
      *> UTILIZAR COMANDO EVALUATE
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-PRODUTO PIC X(25) VALUE SPACES.
       77 WRK-UF PIC X(02) VALUE SPACES.
       77 WRK-VALOR PIC 9(7)V99 VALUE ZEROS.
       77 WRK-FRETE PIC 9(7)V99 VALUE ZEROS.
       77 WRK-VALOR-ED PIC ZZ.ZZ9,99 VALUE ZEROS.
       77 WRK-FRETE-ED PIC ZZ.ZZ9,99 VALUE ZEROS. 
       PROCEDURE DIVISION.
      *>********* INSERINDO DESCRICAO
           DISPLAY '**********************'.
           DISPLAY ' CALCULADORA DE FRETE'.
           DISPLAY '**********************'.
           DISPLAY 'INSIRA O NOME DO PROTUDO: '.
           ACCEPT WRK-PRODUTO FROM CONSOLE.
      *>********* INSERINDO VALOR
           DISPLAY 'INSIRA O VALOR DO PRODUTO: ' WRK-PRODUTO.
           ACCEPT WRK-VALOR FROM CONSOLE.
      *>********* INSERINDO UF     
           DISPLAY 'INSIRA O UF DE DESTINO DO PRODUTO: ' WRK-PRODUTO.
           ACCEPT WRK-UF FROM CONSOLE.
      *>********* CALCULANDO FRETE  
             EVALUATE WRK-UF
               WHEN 'SP'
                 COMPUTE WRK-FRETE = WRK-VALOR * 1,05
               WHEN 'RJ'
                 COMPUTE WRK-FRETE = WRK-VALOR * 1,10
               WHEN 'MG'
                 COMPUTE WRK-FRETE = WRK-VALOR * 1,15  
               WHEN 'BH'
                 COMPUTE WRK-FRETE = WRK-VALOR * 1,20
               WHEN OTHER
                 DISPLAY 'ENTREGA INDISPONIVEL'
              END-EVALUATE.
             MOVE WRK-VALOR TO WRK-VALOR-ED.
             MOVE WRK-FRETE TO WRK-FRETE-ED.
      *>********* RESULADO
           IF WRK-FRETE NOT EQUAL 0
                DISPLAY '==========================='
                DISPLAY 'PRODUTO: ' WRK-PRODUTO
                DISPLAY 'VALOR: R$' WRK-VALOR-ED
                DISPLAY 'ESTADO DESTINO: ' WRK-UF
                DISPLAY 'VALOR DO FRETE: R$' WRK-FRETE-ED
                DISPLAY '==========================='
           END-IF.
           STOP RUN.
