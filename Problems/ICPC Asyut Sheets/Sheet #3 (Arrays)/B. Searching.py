n = int(input())
A = list(map(int, input().split()))
x = int(input())

idx = -1
for i in range(n):
    if A[i] == x:
        idx = i
        break
print(idx)