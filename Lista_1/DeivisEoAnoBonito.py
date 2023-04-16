n = int(input())
resultado = 0

def incrementa_ano(n):
    stringano = str(n)
    histograma = [0] * 10

    for i in stringano:
        histograma[int(i)] += 1
        
    for j in histograma:
        if j >= 2:
            return incrementa_ano(n + 1)
        
    return stringano

print(incrementa_ano(n + 1))