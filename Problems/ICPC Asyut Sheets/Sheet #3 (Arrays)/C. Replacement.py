n = int(input())
A = list(map(int, input().split()))

for i in range(n):
    if A[i] < 0:
        A[i] = 2
    elif A[i] > 0:
        A[i] = 1

for i in A:
    print(i, end=' ')