       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL03.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E IMPRIMIR A DATA DO SISTEMA
      *> UTILIZAR  VARIAVEIS NIVEL 01.02... (ESTRUTURADA)
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WRK-DATA.
          02 WRK-ANO PIC 9(04) VALUE ZEROS.
          02 WRK-MES PIC 9(02) VALUE ZEROS.
          02 WRK-DIA PIC 9(02) VALUE ZEROS.

       77 WRK-NOME PIC X(25) VALUE SPACES.
       PROCEDURE DIVISION.
           DISPLAY 'DATA ATUAL: '.
           ACCEPT WRK-DATA FROM DATE YYYYMMDD.
           DISPLAY '************************'.
           DISPLAY 'DATA... ' WRK-DIA ' DE ' WRK-MES ' DE ' WRK-ANO.
           DISPLAY '************************'.
           STOP RUN.
