n = int(input())
A = list(map(int, input().split()))

count = 0
for i in A:
    if i+1 in A:
        count += 1

print(count)