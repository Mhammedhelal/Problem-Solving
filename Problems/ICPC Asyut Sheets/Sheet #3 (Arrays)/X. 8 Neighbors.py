n,m  = map(int,input().split())
matrix = []
for i in range(n):
    matrix.append(input())
x,y=map(int,input().split())
x -= 1; y-=1

flag = matrix[x-1][y-1] == 'x' and matrix[x-1][y] == 'x' and matrix[x][y-1] == 'x' and matrix[x+1][y] == 'x' and matrix[x][y+1] == 'x' and matrix[x+1][y+1] == 'x' and matrix[x-1][y+1] == 'x' and matrix[x+1][y-1] == 'x' and matrix[x-1][y-1] == 'x'
if flag:
    print('yes')
else:
    print('no')