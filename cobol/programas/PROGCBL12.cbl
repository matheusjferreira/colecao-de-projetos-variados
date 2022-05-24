       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL12.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER LARGURA E COMPRIMENTO
      *> CALCULAR AREA
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-LARGURA PIC 9(03)V99 VALUE ZEROS.
       77 WRK-COMPRIMENTO PIC 9(03)V99 VALUE ZEROS.
       77 WRK-AREA PIC 9(03)V99 VALUE ZEROS.
       PROCEDURE DIVISION.
      *>********* INSERINDO DADOS
           DISPLAY '*********************'.
           DISPLAY ' CALCULADORA DE AREA'.
           DISPLAY '*********************'.
           DISPLAY 'INSIRA A LARGURA: '.
           ACCEPT WRK-LARGURA FROM CONSOLE.
           DISPLAY 'INSIRA O COMPRIMENTO: '.
           ACCEPT WRK-COMPRIMENTO FROM CONSOLE.
      *>********* PROCESSANDO E EXIBINDO DADOS
           IF WRK-LARGURA GREATER 0 AND WRK-COMPRIMENTO GREATER 0
            COMPUTE WRK-AREA = (WRK-LARGURA * WRK-COMPRIMENTO)
            DISPLAY '======================'
            DISPLAY 'AREA = ' WRK-LARGURA ' * ' WRK-COMPRIMENTO
            DISPLAY 'AREA = ' WRK-AREA
            DISPLAY '======================'
           ELSE
               DISPLAY 'VALORES INVALIDOS (INFORME VALORES > 0)'
           END-IF.
           STOP RUN.
