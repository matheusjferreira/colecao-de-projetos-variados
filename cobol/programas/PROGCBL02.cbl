       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL02.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E IMPRIMIR UMA STRING
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME PIC X(25) VALUE SPACES.
       PROCEDURE DIVISION.
           DISPLAY 'INSIRA SEU NOME: '.
           ACCEPT WRK-NOME FROM CONSOLE.
           DISPLAY '**************************************************'.
           DISPLAY 'BEM VINDO ' WRK-NOME.
           DISPLAY '**************************************************'.
           STOP RUN.
