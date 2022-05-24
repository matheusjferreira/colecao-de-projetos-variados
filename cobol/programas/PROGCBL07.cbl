       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL06.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: OPERADORES ARITMETICOS
      *> USO DE SINAL ( -  + ) E MASCARA
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NUM1 PIC 9(02) VALUE ZEROS.
       77 WRK-NUM2 PIC 9(02) VALUE ZEROS.
       77 WRK-RESUL PIC S9(04) VALUE ZEROS.
       77 WRK-RESUL-ED PIC -ZZ9 VALUE ZEROS.
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
           MOVE WRK-RESUL TO WRK-RESUL-ED.
           DISPLAY 'MASCARA X + Y = ' WRK-RESUL-ED.
      *>***************** SUBTRACAO
           SUBTRACT WRK-NUM2 FROM WRK-NUM1 GIVING WRK-RESUL.
           DISPLAY 'X - Y = ' WRK-RESUL.
           MOVE WRK-RESUL TO WRK-RESUL-ED.
           DISPLAY 'MASCARA X - Y = ' WRK-RESUL-ED.
      *>***************** DIVISAO
           DIVIDE WRK-NUM1 BY WRK-NUM2 GIVING WRK-RESUL
             REMAINDER WRK-RESTO.
           DISPLAY 'X / Y = ' WRK-RESUL.
           MOVE WRK-RESUL TO WRK-RESUL-ED.
           DISPLAY 'MASCARA X / Y = ' WRK-RESUL-ED.
           DISPLAY 'RESTO = ' WRK-RESTO.
      *>***************** MULTIPLICACAO
           MULTIPLY WRK-NUM1 BY WRK-NUM2 GIVING WRK-RESUL.
           DISPLAY 'X * Y = ' WRK-RESUL.
           MOVE WRK-RESUL TO WRK-RESUL-ED.
           DISPLAY 'MASCARA X * Y = ' WRK-RESUL-ED.
      *>***************** MEDIA
           COMPUTE WRK-RESUL = (WRK-NUM1 + WRK-NUM2) / 2.
           DISPLAY 'X + Y / 2 = ' WRK-RESUL.
           MOVE WRK-RESUL TO WRK-RESUL-ED.
           DISPLAY 'MASCARA X + Y / 2 = ' WRK-RESUL-ED.
           STOP RUN.
