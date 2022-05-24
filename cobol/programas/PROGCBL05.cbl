       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL05.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER NOME E SALARIO
      *> IMPRIMIR FORMATADO - USO DA VIRGULA
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
        DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME PIC X(25) VALUE SPACES.
       77 WRK-SALARIO PIC 9(06)V99 VALUE ZEROS.
       77 WRK-SALARIO-ED PIC $ZZZ.ZZ9,99 VALUE ZEROS.
       PROCEDURE DIVISION.
           DISPLAY 'DIGITE O NOME: '.
           ACCEPT WRK-NOME FROM CONSOLE.
           DISPLAY 'DIGITE O SALARIO DE ' WRK-NOME.
           ACCEPT WRK-SALARIO FROM CONSOLE.
           MOVE WRK-SALARIO TO WRK-SALARIO-ED.
      *>********************** EXBIR DADOS
           DISPLAY '**************************************************'.
           DISPLAY WRK-NOME 'RECEBE: ' WRK-SALARIO-ED.
           DISPLAY '**************************************************'.
           STOP RUN.
