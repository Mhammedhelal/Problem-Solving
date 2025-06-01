n = float(input())
if int(n) == n:
    print(f"int {int(n)}")
else:
    print(f"float {int(n)} {n-int(n):.3f}")