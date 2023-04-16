n = int(input())
lista = []
dic = {}

for i in range(n):
    nomes = input()
    lista.append(nomes)

sortlista = sorted(lista)

for j in range(0,len(sortlista)):
    dic[sortlista[j]] = j
    
for i in lista:
    print(dic[i], end = " ")
    