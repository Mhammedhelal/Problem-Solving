def between(n, l,r):
    return n >= l and n <= r
l1,r1,l2,r2=map(int,input().split())

if l2 > r1 or l1 > r2: print(-1)
elif between(l2, l1, r1) and between(r2, l1, r1): print(l2,r2)
elif between(l1, l2, r2) and between(r1, l2, r2): print(l1,r1)
elif between(l2, l1, r1): print(l2,r1)
else: print(l1,r2)