n,k = map(int, input().split())
A = list(map(int, input().split()))
A.sort()
sum = 0
for i in reversed(A): 
    if k == 0 or i < 0:
        break
    sum += i
    k -= 1

print(sum)