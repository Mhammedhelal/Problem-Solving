n = int(input())
A = list(map(int, input().split()))

for i in range(n):
    min_idx = i
    for j in range(i + 1, n):
        if A[j] < A[min_idx]:
            min_idx = j
    A[i], A[min_idx] = A[min_idx], A[i]  # swap

print(*A)