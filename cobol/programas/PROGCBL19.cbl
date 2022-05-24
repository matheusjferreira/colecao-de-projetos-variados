       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL19.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E CALCULAR TAXA DE CORRECAO DE INVESTIMENTO
      *> UTILIZAR PERFORM E BOOK
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
        DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
           COPY 'BOOK-19.cbl'.
       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.
           IF WRK-INVESTIMENTO > 0
             PERFORM 0200-PROCESSAR
           END-IF.
           PERFORM 0300-FINALIZAR.
           
           STOP RUN.
       0100-INICIALIZAR.
      *>********* INSERINDO DADOS
           DISPLAY '******************************'.
           DISPLAY ' CALCULADORA DE INVESTIMENTOS'.
           DISPLAY '******************************'.
           DISPLAY 'INSIRA O VALOR DO INVESTIDO: '.
           ACCEPT WRK-INVESTIMENTO.
           DISPLAY 'INSIRA A QUANTIDADE DE MESES: '
           ACCEPT WRK-QNT.
           DISPLAY 'INSIRA O VALOR DA TAXA DE CORRECAO MENSAL: '
           ACCEPT WRK-TAXA.
       0200-PROCESSAR.
      *>********* CALCULANDO INVESTIMENTO
           MOVE WRK-INVESTIMENTO TO WRK-INICIAL-ED.
           COMPUTE WRK-TAXA = (WRK-TAXA / 100).
           ADD 1 TO WRK-TAXA
           PERFORM WRK-QNT TIMES
             COMPUTE WRK-INVESTIMENTO = (WRK-INVESTIMENTO * WRK-TAXA)
           END-PERFORM.
           MOVE WRK-INVESTIMENTO TO WRK-INVESTIMENTO-ED.
       0300-FINALIZAR.
      *>********* RESULTADO
           DISPLAY ' '.
           DISPLAY '=============================='.
           DISPLAY 'VALOR INVESTIDO: ' WRK-INICIAL-ED.
           DISPLAY 'QUANTIDADE DE MESES: ' WRK-QNT.
           DISPLAY 'VALOR CORRIGIDO: ' WRK-INVESTIMENTO-ED.
           DISPLAY '=============================='.
           DISPLAY ' '.
           DISPLAY 'FIM DO PROGRAMA...'.
