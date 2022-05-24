       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL15.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER UM NUMERO E GERAR A TABUADA DE 1 A 10
      *> UTILIZAR PERFORM
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NUMERO PIC 9(02) VALUE ZEROS.
       77 WRK-CONT PIC 9(02) VALUE 1.
       77 WRK-PRODUTO PIC 9(03) VALUE ZEROS.
       PROCEDURE DIVISION.
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.
           IF WRK-NUMERO > 0
             PERFORM 0200-PROCESSAR
           END-IF.
           PERFORM 0300-FINALIZAR.
           
           STOP RUN.
       0100-INICIALIZAR.
      *>********* INSERINDO DADOS
           DISPLAY '********************'.
           DISPLAY ' GERADOR DE TABUADA'.
           DISPLAY '********************'.
           DISPLAY 'INSIRA UM NUMERO (1 A 99): '.
           ACCEPT WRK-NUMERO FROM CONSOLE.
       0200-PROCESSAR.
      *>********* CALCULANDO PRODUTO / RESULTADO
           PERFORM 10 TIMES
             COMPUTE WRK-PRODUTO = (WRK-NUMERO * WRK-CONT)
             DISPLAY WRK-NUMERO ' X ' WRK-CONT ' = ' WRK-PRODUTO
             ADD 1 TO WRK-CONT
           END-PERFORM.
       0300-FINALIZAR.
           DISPLAY 'FIM DO PROGRAMA...'.
