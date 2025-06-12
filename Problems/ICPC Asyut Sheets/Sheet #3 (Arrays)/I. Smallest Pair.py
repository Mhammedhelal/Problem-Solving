t = int(input())

while t > 0:
    n = int(input())
    arr = list(map(int, input().split()))

    pair = arr[0] + arr[1] + 1  # j - i = 1 - 0 = 1

    for i in range(n):
        for j in range(i + 1, n):
            cost = arr[i] + arr[j] + (j - i)
            if cost < pair:
                pair = cost

    print(pair)

    t -= 1
