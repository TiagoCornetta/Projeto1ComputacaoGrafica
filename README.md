Projeto 1 - Computação Gráfica

Participantes:

Nome: Fernando Gabriel Chacon Fernandes Teruel do Prado RA:11201811700

Nome: Tiago Cornetta Campos RA:11201922123

LINK DO PROJETO

De preferência abrir em um navegador no linux:

https://cornettawebdesigner.github.io/Projeto1ComputacaoGrafica/

**DESCRIÇÃO DO PROJETO**

- O projeto consiste na crianção de duas formas geométricas, um circulo e uma espiral.
- Cada ponto desenhado na tela será feito em uma cor aleatório e dado por uma forma geométrica, exemplo: a representação de um ponto pode ser um circulo, triângulo, etc.
- O usuário podera selecionar alguns botões durante o uso da aplicação no qual consistem na seguinte funcionalidade:
  
  	1.0 - (Circulo): O usuário defini que os pontos desenhados formaram a figura de um circulo.	

    		1.1 -(Radius): O usuário definira o tamanho do circulo. 

  	2.0 - (Espiral): O usuário defini que os pontos formaram uma espiral.

  		2.1 - (+): O usuário definira que a espiral abrirá para fora.

  		2.2 - (-): O usuário definira que a espiral irá em direção para dentro.

  		2.3 - (Space): Definira quanto será somado ou subtraido no raio da espiral.

  	3 - (Clear window): limpara a tela.

  	4 - (random sides): cada ponto será representado por uma forma geométrica aleatória quando selecionado. Exemplo um ponto representado por um circulo, depois um triangulo por assim adiante.

  	5 - (Sides): caso a opção random sides esteja deselecionada, cada ponto será represetado por uma forma geométrica de acordo com a quantidade de lados selecionadas. Exemplo: quando for 3 os pontos serão representados por triângulos.

  	6 - (Scale): Definira o tamanho dos pontos.

  	7 - (Delay): Definira a velocidade com que os pontos são plotados na tela.

**COMO FOI IMPLEMENTADO:**

- Nos baseamos no exemplo dos Polígonos regulares para criação de pontos coloridos e de várias formas, para que seja formado um circulo ou uma espiral na tela.
- As funções em que fizemos as mudanças foram:
  
          - window.hpp : foi criado as variáveis que vão ser utilizadas na onPaint.

          - onPaint : para geração dos pontos nas cordenadas certas para que seja foramda uma espiral ou um circulo.

          - onPaintUI : para criação dos botões que aparecem na tela, para alterar os valores das váriaveis que são
          utilizados dentro da função onPaint, desse modo é possível alterar tamanho, velocidade, qual forma a ser
          apresentada, entre outras coisas dos pontos a serem printados na tela. 
  
