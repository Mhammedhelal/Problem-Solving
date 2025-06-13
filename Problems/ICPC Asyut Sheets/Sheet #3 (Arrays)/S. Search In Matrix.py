n,m = map(int,input().split())
matrix = []
for i in range(n):
    matrix.append(list(map(int,input().split())))
x = int(input())

for i in range(n):
    if x in matrix[i]:
        print('will not take number')
        exit()

print('will take number')