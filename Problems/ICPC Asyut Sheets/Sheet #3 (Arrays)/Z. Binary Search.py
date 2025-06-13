def search(A:list[int], x:int) -> int:
    l, r = 0, len(A) - 1
    while l <= r:
        mid = (l + r) // 2
        if A[mid] == x:
            return mid
        elif A[mid] < x:
            l = mid + 1
        else:
            r = mid - 1
    return -1

n,q = map(int, input().split())
A = list(map(int, input().split()))
A.sort()
for i in range(q):
    x = int(input())
    print('not found' if search(A, x) == -1 else 'found')