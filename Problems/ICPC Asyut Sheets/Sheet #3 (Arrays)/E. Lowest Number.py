n = int(input())
A = list(map(int, input().split()))

min = A[0]
j = 0
for i in range(n):
    if A[i]<min:
        min=A[i]
        j=i

print(min,j+1)