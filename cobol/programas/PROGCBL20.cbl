       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL20.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E IMPRIMIR A DATA DO SISTEMA
      *> UTILIZAR  VARIAVEIS TIPO TABELA - OCCURS
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WRK-MESES.
          03 WRK-MES PIC X(09) OCCURS 12  TIMES.
       01 WRK-DATA.
          02 WRK-ANOSYS PIC 9(04) VALUE ZEROS.
          02 WRK-MESSYS PIC 9(02) VALUE ZEROS.
          02 WRK-DIASYS PIC 9(02) VALUE ZEROS.
       77 WRK-NOME PIC X(25) VALUE SPACES.
       PROCEDURE DIVISION.
           DISPLAY 'DATA ATUAL: '.
           ACCEPT WRK-DATA FROM DATE YYYYMMDD.
            PERFORM 0400-MONTAMES.
           DISPLAY '*******************************'.
           DISPLAY 'DATA... ' WRK-DIASYS ' DE ' WRK-MES(WRK-MESSYS) 
           ' DE ' WRK-ANOSYS.
           DISPLAY '*******************************'.

           STOP RUN.
           
       0400-MONTAMES.
           MOVE 'JANEIRO  ' TO WRK-MES(01).
           MOVE 'FEVEREIRO' TO WRK-MES(02).
           MOVE 'MARCO    ' TO WRK-MES(03).
           MOVE 'ABRIL    ' TO WRK-MES(04).
           MOVE 'MAIO     ' TO WRK-MES(05).
           MOVE 'JUNHO    ' TO WRK-MES(06).
           MOVE 'JULHO    ' TO WRK-MES(07).
           MOVE 'AGOSTO   ' TO WRK-MES(08).
           MOVE 'SETEMBRO ' TO WRK-MES(09).
           MOVE 'OUTUBRO  ' TO WRK-MES(10).
           MOVE 'NOVEMBRO ' TO WRK-MES(11).
           MOVE 'DEZEMBRO ' TO WRK-MES(12).
