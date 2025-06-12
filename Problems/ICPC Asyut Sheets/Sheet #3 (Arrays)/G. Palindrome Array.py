n = int(input())
A = list(map(int, input().split()))

i,j=0,n-1

while(i<j):
    if A[i]!=A[j]:
        print('NO')
        break
    i+=1
    j-=1
else:
    print('YES')
