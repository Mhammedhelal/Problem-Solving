def is_lucky(n: int) -> bool:
    while n:
        if n % 10 != 4 and n % 10 != 7:
            return False
        n //= 10
    return True

a, b = map(int, input().split())
have_lucky = False

for i in range(min(a, b), max(a, b) + 1):
    if is_lucky(i):
        print(i, end=' ')
        have_lucky = True

if not have_lucky:
    print(-1)
