k,s = map(int,input().split())
counter = 0

for x in range(0,min(k+1,s+1)):
    for y in range(0,k+1):
        if s-x-y >=0 and s-x-y <= k: counter+=1

print(counter)