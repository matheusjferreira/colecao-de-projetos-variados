       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL11.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER USUARIO E NIVEL
      *> UTILIZAR VARIAVEL NIVEL 88 - LOGICA
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       CONFIGURATION SECTION.
       SPECIAL-NAMES.
           DECIMAL-POINT IS COMMA.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-USUARIO PIC X(15) VALUE SPACES.
       77 WRK-NIVEL PIC 9(02) VALUE ZEROS.
         88 ADM VALUE 01.
         88 USER VALUE 02.
       PROCEDURE DIVISION.
      *>********* INSERINDO NOME DE USUARIO
           DISPLAY '*******************'.
           DISPLAY ' NIVEIS DE USUARIO'.
           DISPLAY '*******************'.
           DISPLAY 'INSIRA O NOME DE USUARIO: '.
           ACCEPT WRK-USUARIO FROM CONSOLE.
      *>********* INSERINDO NIVEL
           DISPLAY 'INSIRA O NIVEL DO USUARIO: ' WRK-USUARIO.
           ACCEPT WRK-NIVEL FROM CONSOLE.
      *>********* EXIBINDO DADOS
           IF ADM
                DISPLAY '====================================='
                DISPLAY WRK-USUARIO ' NIVEL - ADMINISTRADOR'
                DISPLAY '====================================='
           ELSE
                 IF USER
                      DISPLAY '==============================='
                      DISPLAY WRK-USUARIO ' NIVEL - USUARIO'
                      DISPLAY '==============================='
                   ELSE
                        DISPLAY 'USUARIO NAO AUTORIZADO!'     
                 END-IF       
           END-IF.
           STOP RUN.
