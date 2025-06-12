n = int(input())
A = list(map(int, input().split()))

sum=0
for i in range(n):
    sum+=A[i]

print(abs(sum))