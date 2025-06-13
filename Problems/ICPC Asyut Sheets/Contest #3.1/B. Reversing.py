n = int(input())
A = list(map(int, input().split()))
for i in range(n):
    if A[i] == 0:
        A[:i] = reversed(A[:i])

print(*A)