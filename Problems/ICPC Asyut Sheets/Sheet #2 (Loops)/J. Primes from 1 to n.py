def isPrime(n:int)->bool:
    if n<2:return False
    if n==2: return True
    if n%2==0: return False
    for i in range(2,n//2+1):
        if n%i==0: return False
    return True

n = int(input())
for i in range(1,n+1):
    if isPrime(i): print(i,end=' ')
print()