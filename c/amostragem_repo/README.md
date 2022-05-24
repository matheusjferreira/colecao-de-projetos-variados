> # Amostragem em C

Trabalho feito em grupo no 2° semestre de Análise e Desenvolvimento de Sistemas na FATEC Americana (Faculdade de Tecnologia Americana-SP), para a matéria de Estatística Aplicada.

Este trabalho teve como objetivo desenvolver um programa que execute os 3 tipos de Amostragem trabalhadas em sala de aula pela Profª Paula da Fonte Sanches, sendo esses tipos: Amostragem Sistemática, Amostragem Casual ou Aleatória Simples e Amostragem Proporcial Estratificada.

> ## Resultado:

![a1](https://user-images.githubusercontent.com/59848966/79707374-b020d800-8292-11ea-91a9-820982066bbe.png)

> ### Símbolos matemáticos:

	N = Tamanho da populção
	n = Nxn0/N+n0 = Tamanho da amostra
	K = intervalo
	E0 = Erro amostral tolerável
	n0 = 1/E0^2 = Tamanho do erro amostral tolerável

> ## Amostragem Sistemática:

Suponha um bairro contendo 100 prédios empresariais, dos quais desejamos obter uma amostra formada de 10% dessa população. Quais os prédios que irão compor esta amostra?

Resolução:

	N = 100
	n = 10% de 100 = 10
	k = 100/10 = 10

	Um prédio será aleatoriamente selecionado para dar início a seleção sistemática que ocorrerá de 10 em 10 (pois k, o intervalo é igual a 10) até completar 10 amostras (pois n, o tamanho da amostra é igual a 10).

	Exemplo: Prédio selecionado aleatoriamente: 55.

	Amostra 1 = 55
	Amostra 2 = 65
	Amostra 3 = 75
	Amostra 4 = 85
	Amostra 5 = 95
	Amostra 6 = 05
	Amostra 7 = 15
	Amostra 8 = 25
	Amostra 9 = 35
	Amostra 10 = 45

![a2](https://user-images.githubusercontent.com/59848966/79680360-35e64a00-81e5-11ea-8884-98df2bf47646.png)
![a3](https://user-images.githubusercontent.com/59848966/79680362-37b00d80-81e5-11ea-8466-e1520a4893c5.png)

> ## Amostragem Casual ou Aleatória Simples:

Planeja-se um levantamento por amostragem para avaliar diversas características da população das 2.000 empresas do distrito industrial de São Paulo. Estas características são especificamente do tipo porcentagens, tais como: a porcentagem de empresas que usam programas de segurança de trabalho, etc. Qual deve ser o tamanho mínimo da amostra, tal que possamos admitir, com alta confiança, que os erros amostrais não ultrapassem 4%?

Resolução:

	n0 = 1/E0^2 = 1/0,04^2 = 625

	n = NXn0/N+n0 = 2.000x625/2.000+625 = 476,19 = 477 empresas.

![a4](https://user-images.githubusercontent.com/59848966/79680364-40084880-81e5-11ea-8acb-49997315a978.png)

> ## Amostragem Proporcial Estratificada:

Com o objetivo de investigar a receita bruta de revenda das empresas do polo industrial do Rio de Janeiro, decidiu-se realizar um levantamento por amostragem. A população das empresas foi estratificada pelo setor produtivo a que pertencia, conforme mostra o quadro a seguir. Extraia uma amostra proporcial estratificada que garanta com alto nível de confiança, um erro amostral não superior a 10%

	Setor 			 N°
	Automobilístico  	 18
	Eletroeletrônico 	 22
	Relojoeiro		 14
	Outro            	 26
	Total			 80

Resolução:

	N = 80 
	E0 = 10% = 0,1
	n0 = 1/0,1^2 = 100

	n = 80x100/80+100 = 45

	80--100%
	45--x

	80x = 4500
	x = 4500/80 = 56,25

	56,25x18 = 10,125 = 10
	56,25x22 = 12,375 = 12
	56,25x14 = 7,875  = 8
	56,25x26 = 14,625 = 15

	Total               45

![a5](https://user-images.githubusercontent.com/59848966/79680366-41397580-81e5-11ea-833d-c78651a8496d.png)

> ## Mecânicas anti erros:

O programa também possui em suas funcionalidades mecânias para impedir que o usuário insira letras e símbolos onde se deve inserir apenas números, como também rejeita valores negativos (pois somente valores positivos são capazes de executar as operações), e também para que não gere erros no cálculo ou retorne valores incoerentes o programa retorna ao menu quando é inserido um valor de população menor que o do tamanho da amostra (pois é um valor inválido para as operações de amostragem).

![a6](https://user-images.githubusercontent.com/59848966/79707376-b1520500-8292-11ea-8188-45ecb4ee98da.png)

Referências bibliográficas:

SHANCHES, Paula Da Fonte. et al. Estatística Básica. 3° edição revisada e ampliada. INDAIATUBA (SP): Gráfica e Editora Vitória, 2017.

> ## Ferramentas:

* Code::Blocks;

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
