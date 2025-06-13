n,m  = map(int,input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

z,counter=0,0
for i in range(n):
    if z == m:
        break
    if A[i] == B[z]:
        z += 1
        counter += 1


print("YES" if z == m else "NO")