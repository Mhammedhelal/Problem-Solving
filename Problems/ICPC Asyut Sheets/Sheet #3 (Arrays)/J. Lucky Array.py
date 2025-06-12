def minimum(arr):
    min_val = arr[0]
    for i in range(1, len(arr)):
        if arr[i] < min_val:
            min_val = arr[i]
    return min_val

def is_lucky(arr):
    min_val = minimum(arr)
    frequency = 0
    for i in arr:
        if i == min_val:
            frequency += 1
    return frequency % 2 == 1

# Main
n = int(input())
arr = list(map(int, input().split()))

if is_lucky(arr):
    print("Lucky")
else:
    print("Unlucky")
