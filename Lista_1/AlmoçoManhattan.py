n,locx,locy = (int(x) for x in input().split())
resta_dic = {}

for i in range(1,n+1):
    restaurante = []
    resx,resy,preco = (int(x) for x in input().split())
    
    dist = (abs(locx - resx) + abs(locy - resy)) * 2 + preco
    
    resta_dic[i] = dist

sorted_dic = {}
for i in resta_dic:

    if resta_dic[i] not in sorted_dic:
        sorted_dic[resta_dic[i]] = i

    
rest = min(sorted_dic)
print(rest, sorted_dic[rest])