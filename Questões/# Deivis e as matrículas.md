# Deivis e as matrículas

Deivis e vários de seus amigos entraram na universidade, mais precisamente n. Deivis sabia que o número da matrícula de cada um era dado em função da ordem alfabética dos nomes de cada um. De forma que a primeira pessoa na ordem alfabética ganharia a matrícula 0, e a última a matrícula n - 1. Deivis e seus amigos mal podem esperar para descobrir suas matrículas, ajude-os com isso.

## Input
A primeira linha de entrada contém um inteiro n (1 <= n <= 10), o número de amigos de Deivis(incluindo Deivis). As pŕoximas n linhas contém cada uma o nome dos amigos de Deivis. É garantido que os nomes são distintos. O tamanho de cada nome não excede 25 caracteres, e contém apenas letras do alfabeto inglês.

## Output
Imprima uma única linha: as matrículas de cada um dos amigos de Deivis, na ordem que foram lidos na entrada, separadas por um espaço.

### **Examples**
Input |
-----
4
Deivis
Veras
Taumaturgo
Andre

Output |
----
1 3 2 0

Input |
-----
1
Deivis

Output |
----
0

Input |
-----
2
Deivis
Doraaventureira

Output |
----
0 1