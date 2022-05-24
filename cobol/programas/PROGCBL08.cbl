       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL08.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: RECEBER E IMPRIMIR 02 NOTAS E STATUS
      *> UTILIZAR COMANDOS IF / ELSE / END-IF
      *> DATE: = XX/XX/XXXX
      *>*****************************************************************
       ENVIRONMENT DIVISION.
       DATA DIVISION.
       WORKING-STORAGE SECTION.
       77 WRK-NOME PIC X(25) VALUE SPACES.
       77 WRK-NOTA1 PIC 9(04) VALUE ZEROS.
       77 WRK-NOTA2 PIC 9(02) VALUE ZEROS.
       77 WRK-MEDIA PIC 9(02)V9 VALUE ZEROS.
       PROCEDURE DIVISION.
      *>********* INSERINDO NOME
           DISPLAY '**********************'.
           DISPLAY ' CALCULADORA DE MEDIA'.
           DISPLAY '**********************'.
           DISPLAY 'INSIRA O NOME DO ALUNO: '.
           ACCEPT WRK-NOME FROM CONSOLE.
      *>********* INSERINDO NOTAS
           DISPLAY 'INSIRA A PRIMEIRA NOTA DE ' WRK-NOME.
           ACCEPT WRK-NOTA1 FROM CONSOLE.
           DISPLAY 'INSIRA A SEGUNDA NOTA DE ' WRK-NOME.
           ACCEPT WRK-NOTA2 FROM CONSOLE.
      *>********* CALCULANDO MEDIA
            COMPUTE WRK-MEDIA = (WRK-NOTA1 + WRK-NOTA2) / 2.
              IF WRK-MEDIA >= 6
                    DISPLAY 'APROVADO'
              ELSE
                     IF WRK-MEDIA >= 3
                         DISPLAY 'RECUPERACAO'
                     ELSE
                         DISPLAY 'REPROVADO'
                     END-IF
              END-IF.
      *>********* RESULTADO
           DISPLAY 'ALUNO: ' WRK-NOME ' MEDIA: ' WRK-MEDIA.
           STOP RUN.
