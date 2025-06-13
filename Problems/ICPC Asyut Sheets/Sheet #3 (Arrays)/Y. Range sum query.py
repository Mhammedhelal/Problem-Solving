n,q = map(int, input().split())
A = list(map(int, input().split()))
for i in range(q):
    l,r = map(int, input().split())
    print(sum(A[l-1:r]))