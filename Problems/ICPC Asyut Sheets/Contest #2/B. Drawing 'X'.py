n = int(input())

for i in range(n):
    for j in range(n):
        if i == j and i + j == n - 1:
            print('X', end='')
        elif i == j:
            print('\\', end='')
        elif i + j == n - 1:
            print('/', end='')
        else:
            print('*', end='')
    print()


# n = int(input())
# x, y = 1, n

# for i in range(1, n + 1):
#     for j in range(1, n + 1):
#         if n % 2 != 0 and i == (n // 2) + 1 and j == (n // 2) + 1:
#             print('X', end='')
#         else:
#             if j == x:
#                 print('\\', end='')
#             elif j == y:
#                 print('/', end='')
#             else:
#                 print('*', end='')
#     x += 1
#     y -= 1
#     print()
