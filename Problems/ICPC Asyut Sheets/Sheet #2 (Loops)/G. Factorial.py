def f(n:int)->int:
    if n<2: return 1
    return n*f(n-1)

t = int(input())
for i in range(t):
    n = int(input())
    print(f(n))