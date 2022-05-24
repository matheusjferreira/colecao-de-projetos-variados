> # Cramer X & Y em C

> ## O Projeto:

Programa em C desenvolvido para resolver um sistema linear de equações utilizando-se da regra de Cramer.

O programa resolve e fornece a solução de equações com incógnitas x e y.

> ## Resultado:

![cramer1](https://user-images.githubusercontent.com/59848966/82277846-42ce9880-995f-11ea-961f-0c187e55da24.png)

> ## Utilizando o Programa:

Dado o sistema:

	2x + 8y = 0
	9x + 6y = 15

x = Dx / D

y = Dy / D

D:

	2      8
	9      6    

O determinante é dado por D = 2*6 – 8*9 →12 – 72 → – 60

Verificamos que o D ≠ 0, então o sistema é possível e determinado.

A solução desse sistema será dada por:
	
Onde Dx e Dy são obtidos trocando a coluna x ou a y (de acordo com a que está calculando) pela coluna dos termos independentes. Observe:

Dx:
	 
	0         8
	15        6


	0*6 – 8*15 = – 120

	x = Dx / D = – 120/– 60 = 2
	x = 2

Dy:

	2      0
	9     15

	2*15 – 0*9 = 30

	y = Dy / D = 30 / – 60 = – 0,5
	y = – 0,5

	S{2 , -0,5}

![cramer2](https://user-images.githubusercontent.com/59848966/83654734-e04ade80-a593-11ea-8f7e-f134326cf121.png)

Se o sistema for impossível (onde determinante igual a 0):

Equação:

	3x – 3y = – 9
	3x – 3y = 15

	D = 0

![cramer4](https://user-images.githubusercontent.com/59848966/83654737-e17c0b80-a593-11ea-9721-2d9b230e35fb.png)

> ## Bibliografia (das quais derivam os exemplos):

https://mundoeducacao.uol.com.br/matematica/solucao-um-sistema-utilizando-regra-cramer.htm

https://mundoeducacao.uol.com.br/matematica/classificacao-um-sistema-linear.htm

> ## Ferramentas:

* Code::Blocks;

> ## Copyright:

![cramer3](https://user-images.githubusercontent.com/59848966/82277850-43ffc580-995f-11ea-9214-ae4b03309de0.png)

Feito em conjunto com Miguel Chiarello Fernandes e Renan de Souza Ramazzini.

> ## Licença:

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
