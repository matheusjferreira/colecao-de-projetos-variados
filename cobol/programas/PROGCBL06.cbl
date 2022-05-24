       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL06.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: OPERADORES ARITMETICOS
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NUM1 PIC 9(02) VALUE ZEROS.
       77 WRK-NUM2 PIC 9(02) VALUE ZEROS.
       77 WRK-RESUL PIC 9(04) VALUE ZEROS.
       77 WRK-RESTO PIC 9(02) VALUE ZEROS.
       PROCEDURE DIVISION.
           DISPLAY '*************************'.
           DISPLAY ' OPERACOES ARITIMETICAS'.
           DISPLAY '*************************'.
           DISPLAY 'INSIRA O VALOR DE (X): '.
           ACCEPT WRK-NUM1 FROM CONSOLE.
           DISPLAY 'INSIRA O VALOR DE (Y): '.
           ACCEPT WRK-NUM2 FROM CONSOLE.
           DISPLAY '==============='.
           DISPLAY 'X = ' WRK-NUM1.
           DISPLAY 'Y = ' WRK-NUM2.
           DISPLAY '==============='.
      *>***************** SOMA
           ADD WRK-NUM1 WRK-NUM2 TO WRK-RESUL.
           DISPLAY 'X + Y = ' WRK-RESUL.
      *>***************** SUBTRACAO
           SUBTRACT WRK-NUM1 FROM WRK-NUM2 GIVING WRK-RESUL.
           DISPLAY 'X - Y = ' WRK-RESUL.
      *>***************** DIVISAO
           DIVIDE WRK-NUM1 BY WRK-NUM2 GIVING WRK-RESUL
             REMAINDER WRK-RESTO.
           DISPLAY 'X / Y = ' WRK-RESUL.
           DISPLAY 'RESTO = ' WRK-RESTO.
      *>***************** MULTIPLICACAO
           MULTIPLY WRK-NUM1 BY WRK-NUM2 GIVING WRK-RESUL.
           DISPLAY 'X * Y = ' WRK-RESUL.
      *>***************** MEDIA
           COMPUTE WRK-RESUL = (WRK-NUM1 + WRK-NUM2) / 2.
           DISPLAY 'MEDIA = ' WRK-RESUL.
           STOP RUN.
