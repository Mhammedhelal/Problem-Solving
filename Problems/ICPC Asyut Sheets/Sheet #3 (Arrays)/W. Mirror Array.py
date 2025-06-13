n,m  = map(int,input().split())
matrix = []
for i in range(n):
    matrix.append(list(map(int,input().split())))

for i in range(n):
    print(*matrix[i][::-1])
