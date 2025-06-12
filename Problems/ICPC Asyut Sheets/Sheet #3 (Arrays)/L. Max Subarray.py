def max_element(arr, start, end):
    max_val = arr[start]
    for i in range(start, end + 1):
        if arr[i] > max_val:
            max_val = arr[i]
    return max_val

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    for i in range(n):
        for j in range(i, n):
            print(max_element(arr, i, j), end=" ")
    print()