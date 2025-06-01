from math import log2

a, b, c, d = map(int, input().split())

if b * log2(a) > d * log2(c):
    print("YES")
else:
    print("NO")