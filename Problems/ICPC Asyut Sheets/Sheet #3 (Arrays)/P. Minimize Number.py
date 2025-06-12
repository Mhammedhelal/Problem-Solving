def array_minimum(arr):
    minimum = arr[0]
    for i in range(1, len(arr)):
        if arr[i] < minimum:
            minimum = arr[i]
    return minimum

n = int(input())
arr = list(map(int, input().split()))
operation = []

for num in arr:
    flag = 0
    while num % 2 == 0:
        num //= 2
        flag += 1
    operation.append(flag)

print(array_minimum(operation))
