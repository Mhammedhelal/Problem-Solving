n = int(input())
A = list(map(int, input().split()))

A = reversed(A)
for i in A:
    print(i, end=' ')