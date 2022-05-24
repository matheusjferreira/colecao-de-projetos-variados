       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL18.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: REGISTRAR E CALCULAR O TOTAL DE VENDAS
      *> UTILIZAR BOOK
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
        DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
           COPY 'BOOK-18.cbl'.
       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.
           IF WRK-VENDAS > 0
             PERFORM 0200-PROCESSAR UNTIL WRK-VENDAS = 0
           END-IF.
           PERFORM 0300-FINALIZAR.
           
           STOP RUN.
       0100-INICIALIZAR.
      *>********* INSERINDO DADOS
           DISPLAY '***********************'.
           DISPLAY ' CALCULADORA DE VENDAS'.
           DISPLAY '***********************'.
           DISPLAY 'INSIRA O VALOR DA VENDA: '.
           ACCEPT WRK-VENDAS FROM CONSOLE.
       0200-PROCESSAR.
      *>********* CALCULANDO VENDAS
           ADD 1 TO WRK-QNT.
           ADD WRK-VENDAS TO WRK-ACUM.
           PERFORM 0100-INICIALIZAR.
       0300-FINALIZAR.
      *>********* RESULTADO
           MOVE WRK-ACUM TO WRK-ACUM-ED.
           DISPLAY 'QUANTIDADE DE VENDAS: ' WRK-QNT.
           DISPLAY 'TOTAL VENDAS: ' WRK-ACUM-ED.
           DISPLAY 'FIM DO PROGRAMA...'.
