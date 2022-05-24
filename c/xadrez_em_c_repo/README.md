> # Xadrez em C

> ## O Projeto:

Jogo de xadrez desenvolvido em linguagem C através da vídeo aula do prof° Antonio Carvalho, de "Programação II" da FATEC (Faculdade de Tecnologia) - Carapicuiba.

O jogo é totalmente em linguagem C e foi finalizado de forma diferente da vídeo aula, pois o professor não finaliza os movimentos das peças, e finaliza o jogo através do SDL.

O jogo possui todos os movimentos corretos das peças (que são obtidos calculando o desvio vertical e o desvio horizontal de cada peça), e é perfeitamente jogável, contanto que os usuários sigam as regras do jogo.

> ## Funcionalidades:

* O jogo ao ser executado inicia-se em modo full-screen;
* O jogo pussui cógigos para imprimir mais de 3 cores;
* O jogo não aceita letras como coordenadas;
* Movimento de roque grande e pequeno foi introduzido;
* Movimentos dos peões, como comer, salto inicial (mover-se 2 casas para frente em seu primeiro movimento) e metamorfose (transformar-se em outra peça a escolha do jogador caso alcance o fim do tabuleiro) também foram introduzidos;
* Xeque-mate introduzido;
* Coordenada secreta (volta ao menu durante o jogo) "373 212" (sem aspas);

> ## Resultado:

Menu:
![x1](https://user-images.githubusercontent.com/59848966/80982346-94284500-8e01-11ea-8879-6185e53ffe99.png)
![x2](https://user-images.githubusercontent.com/59848966/80982347-94c0db80-8e01-11ea-8ccc-3f9511c895b6.png)

Peões andando 2 casas em seus movimentos iniciais:
![x3](https://user-images.githubusercontent.com/59848966/80982332-912d5480-8e01-11ea-95ac-f0cce05fbe87.png)

Metamorfose do peão:
![x4](https://user-images.githubusercontent.com/59848966/80982335-925e8180-8e01-11ea-8a57-f20d675cc624.png)

Após metamorfose:
![x5](https://user-images.githubusercontent.com/59848966/80982340-92f71800-8e01-11ea-9a08-4c4da03fd70d.png)

Xeque-mate:
![x6](https://user-images.githubusercontent.com/59848966/80982342-938fae80-8e01-11ea-950e-5669362c65f8.png)

Vitória branco/preto:
![x7](https://user-images.githubusercontent.com/59848966/80984045-bd49d500-8e03-11ea-83c3-21dd63ce7a7e.png)

Erro ao inserir coordenanas inválidas e mais de 3 cores em tela:
![x8](https://user-images.githubusercontent.com/59848966/80986367-dbfd9b00-8e06-11ea-8e01-3fe2cce85204.png)

> ## Ferramentas:

* Code::Blocks;

> ## Referência:

Antonio Carvalho - https://www.youtube.com/watch?v=3JLFZWxTruM;

> ## License:

	MIT License

	Copyright (c) 2022 Matheus Ferreira

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
