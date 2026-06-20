<!--

                            Online HTML Compiler.
                Code, Compile, Run and Debug HTML program online.
Write your code in this editor and press "Run" button to execute it.

-->

<html>
 <!DOCTYPE html>
<html>
  <head>
    <title>Hello, World!</title>
    <link rel="stylesheet" href="styles.css" />
  </head>
  <body>
<h1>Flip-Flop JK com Entradas Preset e Clear</h1>

<h2 style="text-align: center;">Introdução</h2>
    <div style="width:100%; text-align: justify;">
O projeto surgiu à partir de uma aula de Eletrônica Digital onde aprendemos a lógica em cima do Flip-Flop JK, então desenvolvi uma ideia de recriar 100% do funcionamento de um CI4001 em programação. Para isto utilizamos um arduino como substituição do CI e da Fonte de Tensão. Como outros componentes temos dois botões, três resistores sendo dois de 1k e um de 220 Ohm, um led e jumpers.
    </div>

<div style="width:100%; text-align: justify;">
O projeto precisa funcionar de acordo com o diagrama criado em sala de aula, apenas substituindo a parte do circuito integrado pela programação no arduino.
</div>

<h2 style="text-align: center;">Diagrama do Circuito</h2>
<div style="width:100%; text-align: justify;">
O circuito e a programação foram montados primeiramente no Tinkercad, para evitar de queimar algum componente por má conexão. Para o desenvolvimento da programação utilizei a tabela verdade do Flip-Flop como base para o comportamento da nossa programação. Com isso, precisava desenvolver um sistema que guardasse a variável inserida pelo usuário e mais tarde viesse a transpor por uma nova variável. Ou seja, se o usuário guarda 1 na variável, ela rodará em loop no programa, ao clicar 0, o 0 sobreescreve o 1 e agora ele passará a rodar em loop no programa. Tal qual pode ser observado, no diagrama abaixo. 
    <div style="width:75%; text-align:center;">
       <blockquote class="imgur-embed-pub" lang="en" data-id="rCz2wkm">
           <a href="https://imgur.com/rCz2wkm">View post on imgur.com</a></blockquote>
       <script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>
    </div>
</div>


<h2 style="text-align: center;">Montagem do Circuito</h2>
<div style="width:100%; text-align: justify;">
Após entender o circuito fiz a conexão de cada componente no Tinkercad e dei início à programação. Depois de finalizada passei para meu Arduino IDE e montei na minha protoboard. Compare a montagem do Tinkercad com a minha abaixo:
    <div >
        <td> <blockquote class="imgur-embed-pub" lang="en" data-id="BNMg708">
            <a href="https://imgur.com/BNMg708">View post on imgur.com</a></blockquote>
        <script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>
        </td>
        <td> <blockquote class="imgur-embed-pub" lang="en" data-id="EZ0SOB6">
            <a href="https://imgur.com/EZ0SOB6">View post on imgur.com</a>
            </blockquote>
            <script async src="//s.imgur.com/min/embed.js" charset="utf-8"></script>
            </td>
    </div>
</div>
  </body>
</html>
  </html>