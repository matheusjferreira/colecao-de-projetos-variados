       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL17.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: REGISTRAR E CALCULAR O TOTAL DE VENDAS
      *> UTILIZAR PERFORM - UNTIL
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
        DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-VENDAS PIC 9(06)V99 VALUE ZEROS.
       77 WRK-QNT PIC 9(03) VALUE ZEROS.
       77 WRK-ACUM PIC 9(08)V99 VALUE ZEROS.
       77 WRK-ACUM-ED PIC $ZZZ.ZZ9,99 VALUE ZEROS.
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
