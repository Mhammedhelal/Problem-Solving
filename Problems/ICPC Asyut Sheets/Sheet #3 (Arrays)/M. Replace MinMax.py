def array_minimum(arr):
    minimum = arr[0]
    for i in range(1, len(arr)):
        if arr[i] < minimum:
            minimum = arr[i]
    return minimum

def array_maximum(arr):
    maximum = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > maximum:
            maximum = arr[i]
    return maximum

# Main
size = int(input())
arr = list(map(int, input().split()))

min_val = array_minimum(arr)
max_val = array_maximum(arr)

for i in arr:
    if i == max_val:
        print(min_val, end=' ')
    elif i == min_val:
        print(max_val, end=' ')
    else:
        print(i, end=' ')
