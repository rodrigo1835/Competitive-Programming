n = int(input())
prob = [int(x) for x in input().split()]
sortprob = sorted(prob)

diafinal = []
dia = 1
for i in sortprob:
    if i >= dia:
        diafinal.append(i)
        
    elif i == mesmo:
        continue
    
    dia += 1
    mesmo = i

print(len(diafinal))