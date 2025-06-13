n,m = map(int, input().split())
A = list(map(int, input().split()))
B = {}
for i in A:
    B[i] = B.get(i, 0) + 1

for i in range(1,m+1):
    print(B.get(i, 0))