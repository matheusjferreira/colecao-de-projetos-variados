       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL21.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E IMPRIMIR A DATA DO SISTEMA
      *> UTILIZAR  VARIAVEIS TIPO TABELA - REDEFINES
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       01 WRK-MESES-EXTENSO.
          02 FILLER PIC X(03) VALUE 'JAN'.
          02 FILLER PIC X(03) VALUE 'FEV'.
          02 FILLER PIC X(03) VALUE 'MAR'.
          02 FILLER PIC X(03) VALUE 'ABR'.
          02 FILLER PIC X(03) VALUE 'MAI'.
          02 FILLER PIC X(03) VALUE 'JUN'.
          02 FILLER PIC X(03) VALUE 'JUL'.
          02 FILLER PIC X(03) VALUE 'AGO'.
          02 FILLER PIC X(03) VALUE 'SET'.
          02 FILLER PIC X(03) VALUE 'OUT'.
          02 FILLER PIC X(03) VALUE 'NEV'.
          02 FILLER PIC X(03) VALUE 'DEZ'.
       01 WRK-MESES REDEFINES WRK-MESES-EXTENSO.
          02 WRK-MES PIC X(03) OCCURS 12 TIMES.
       01 WRK-DATA.
          02 WRK-ANOSYS PIC 9(04) VALUE ZEROS.
          02 WRK-MESSYS PIC 9(02) VALUE ZEROS.
          02 WRK-DIASYS PIC 9(02) VALUE ZEROS.
       77 WRK-NOME PIC X(25) VALUE SPACES.
       PROCEDURE DIVISION.
           DISPLAY 'DATA ATUAL: '.
           ACCEPT WRK-DATA FROM DATE YYYYMMDD.
           DISPLAY '*************************'.
           DISPLAY 'DATA... ' WRK-DIASYS ' DE ' WRK-MES(WRK-MESSYS) 
           ' DE ' WRK-ANOSYS.
           DISPLAY '*************************'.

           STOP RUN.
