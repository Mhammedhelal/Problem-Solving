def sumOfDigits(n):
    sum=0
    while n>0:
        sum+=n%10
        n//=10
    return sum



n,a,b=map(int,input().split())
sum=0

for i in range(1,n+1):
    if(sumOfDigits(i)>=a and sumOfDigits(i)<=b):
        sum+=i

print(sum)