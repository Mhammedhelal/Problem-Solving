value = [-1]*46
def fib(n:int)->int:
    if n <= 2: return n-1
    if value[n]!=-1: return value[n]
    v1 = fib(n-1) if value[n-1] == -1 else value[n-1]
    v2 = fib(n-2) if value[n-2] == -1 else value[n-2]
    value[n] = v1 + v2
    return value[n]

n = int(input())
for i in range(1,n+1):
    print(fib(i),end=' ')