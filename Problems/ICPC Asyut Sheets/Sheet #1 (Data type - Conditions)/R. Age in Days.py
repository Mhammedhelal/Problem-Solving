n = int(input())

y = int(n/365)
n %= 365
m = int(n/30)
n%=30
print(f"{y} years\n{m} months\n{n} days")