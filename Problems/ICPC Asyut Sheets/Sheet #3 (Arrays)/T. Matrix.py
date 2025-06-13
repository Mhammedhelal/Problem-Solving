n = int(input())
matrix = []
for i in range(n):
    matrix.append(list(map(int,input().split())))


primary,secondary=0,0
for i in range(n):
    for j in range(n):
        if i==j: primary += matrix[i][j]
        if i+j == n-1: secondary += matrix[i][j]
print(abs(primary-secondary))