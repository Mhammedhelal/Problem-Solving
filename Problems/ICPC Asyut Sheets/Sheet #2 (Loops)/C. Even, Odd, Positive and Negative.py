n = int(input())
arr = list(map(int, input().split()))

pos, neg, even, odd = 0, 0, 0, 0

for x in arr:
    if x % 2 == 0:
        even += 1
    else:
        odd += 1

    if x > 0:
        pos += 1
    elif x < 0:
        neg += 1

print(f"Even: {even}\nOdd: {odd}\nPositive: {pos}\nNegative: {neg}")
