       IDENTIFICATION DIVISION.
       PROGRAM-ID. PROGCBL14.
      *>*****************************************************************
      *> AREA DE COMENTARIOS - REMARKS
      *> AUTHOR = MATHEUSFERREIRA WALKER
      *> OBJETIVO: USO DE PARAGRAFOS
      *>           USO DA LOGICA ESTRUTURADA
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
       0001-PRINCIPAL.
           PERFORM 0100-INICIALIZAR.
           IF WRK-NOTA1 > 0 AND WRK-NOTA2 > 0
             PERFORM 0200-PROCESSAR
           ELSE
             DISPLAY 'VALORES IGUAIS A 0'
           END-IF.
           PERFORM 0300-FINALIZAR.
           
           STOP RUN.
       0100-INICIALIZAR.
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
       0200-PROCESSAR.
      *>********* CALCULANDO MEDIA
            COMPUTE WRK-MEDIA = (WRK-NOTA1 + WRK-NOTA2) / 2.
              IF WRK-MEDIA >= 6
                    DISPLAY 'STATUS: APROVADO'
              ELSE
                     IF WRK-MEDIA >= 3
                         DISPLAY 'STATUS: RECUPERACAO'
                     ELSE
                         DISPLAY 'STATUS: REPROVADO'
                     END-IF
              END-IF.
      *>********* RESULTADO
           DISPLAY 'ALUNO: ' WRK-NOME ' MEDIA: ' WRK-MEDIA.
       0300-FINALIZAR.
           DISPLAY 'FINAL DE PROCESSAMENTO.'.
