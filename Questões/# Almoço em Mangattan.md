# Almoço em Mangattan

Chico está de férias em Manhattan e quer almoçar, mas pretende gastar pouco com sua refeição. Após realizar uma rápida pesquisa na Internet, ele conseguiu uma lista com a localização (x,y)
 e o preço médio da refeição de diversos restaurantes. O que ele ainda não levou em consideração foi o custo de transporte!

Ele sabe sua atual localização, e que a distância entre duas localizações (xa,ya)
 e (xb,yb)
 é dada por |xa−xb|+|ya−yb|
, conhecida como distância de Manhattan (ou métrica do táxi). Chico também disse que, de táxi, gasta 2 dinheiros para cada unidade de distância. Este custo do transporte deve ser levado em consideração para o cálculo do custo total do almoço.

Chico sabe que você é bom em informática e quer sua ajuda para economizar! Ele vai te mandar, pelo zap, sua localização e uma lista de restaurantes com localização e preço médio da refeição.

Manhattan é uma cidade cheia de prédios, então é possível pode haver mais de um restaurante em uma mesma localização.

### Input
A primeira linha da entrada contém três inteiros, separados por espaço,<b> N
 (1≤N≤10^5)
, xc
 e yc
 (−10^3≤xc,yc≤10^3)</b>
, os quais representam a quantidade de restaurantes na lista e a localização de Chico, respectivamente.

Em seguida, são descritas N linhas. Cada linha contém três inteiros<b> xi
, yi
 (−10^3≤xi,yi≤10^3)</b>
 e <b>pi
 (1≤pi≤30)</b>
, os quais descrevem a posição do i
-ésimo restaurante e seu preço <b>(1≤i≤N
)</b>, respectivamente.

### Output
Em uma única linha de saída, imprima dois inteiros<b> V
 e L</b>
, separados por um espaço em branco.

O inteiro V
 representa o gasto total, e deve ser o menor valor que Chico pagará para almoçar, considerando o custo do transporte. O inteiro <b>L
 (1≤L≤N)</b>
 é o índice, de acordo com a ordem de leitura, do restaurante onde Chico deve ir.

Caso exista vários restaurantes empatados com menor preço, você deve imprimir o menor índice.

#### input
3 3 3<br>
1000 1000 2<br>
4 4 10<br>
10 -17 8

#### output
14 2

#### input
2 -2 2<br>
-1 3 2<br>
-1 2 4

#### output
6 1

#### input
2 -2 2<br>
-1 2 4<br>
-1 3 2

#### output
6 1

#### input
4 -2 2<br>
-2 1 4<br>
-2 1 3<br>
-1 2 4<br>
-1 3 2

#### output
5 2
