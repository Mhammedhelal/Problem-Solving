def GCD(a: int, b: int) -> int:
    if b == 0:
        return a
    return GCD(b, a % b)

a, b = map(int, input().split())
print(GCD(a, b))
