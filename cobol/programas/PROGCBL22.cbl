       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL22.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER VENDAS POR MES E IMPRIMIR TABELA
      *> UTILIZAR LOGICA ESTRUTURADA, PERFORM, VARIAVEIS DE GRUPO,
      *>          INDEXADAS E OPERADORES ARITMETICOS.
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
        DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WRK-MESES.
       02 WRK-MES PIC 9(6)V99 OCCURS 12 TIMES.
       77 WRK-MESVENDA  PIC 9(2)           VALUE ZEROS.
       77 WRK-VALOR     PIC 9(06)V99       VALUE ZEROS.
       PROCEDURE DIVISION.
       0000-PRINCIPAL.
            PERFORM 0100-INICIALIZAR.
            PERFORM 0200-PROCESSAR UNTIL WRK-MESVENDA EQUAL 99.
            PERFORM 0300-FINALIZAR.
     
            STOP RUN.
       0100-INICIALIZAR.
      *>********* INSERINDO DADOS
           DISPLAY 'MES DA VENDA  '
           ACCEPT WRK-MESVENDA.
           IF WRK-MESVENDA NOT EQUAL 99
              DISPLAY 'VALOR DA VENDA '
              ACCEPT WRK-VALOR
              ADD WRK-VALOR TO WRK-MES(WRK-MESVENDA)
           END-IF.
       0200-PROCESSAR.
      *>********* EXECUCAO
           PERFORM 0100-INICIALIZAR.
       0300-FINALIZAR.
      *>********* RESULTADO
           DISPLAY '========================'.
           PERFORM VARYING WRK-MESVENDA FROM 1 BY 1 
                           UNTIL WRK-MESVENDA > 12
           DISPLAY 'VALOR MES ' WRK-MESVENDA ' = '
                                WRK-MES(WRK-MESVENDA)
           END-PERFORM.
           DISPLAY '========================'.
