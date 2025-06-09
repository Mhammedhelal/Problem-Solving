def reverse(n:int)->int:
    rev=0
    while n>0:
        rev*=10
        rev+=n%10
        n//=10
    return rev

n = int(input())
rev = reverse(n)
print(rev)
print(f"{'YES' if n == reverse(n) else 'NO'}")