def nonDecreasingSubarrays(nums):
    n = len(nums)
    count = 0
    left = 0

    for right in range(n):
        if right > 0 and nums[right] < nums[right - 1]:
            left = right
        
        count += right - left + 1

    return count



t = int(input())
for i in range(t):
    n = int(input())
    nums = list(map(int, input().split()))
    count = nonDecreasingSubarrays(nums)
    print(count)