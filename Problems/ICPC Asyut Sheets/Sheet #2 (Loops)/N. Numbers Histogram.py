s = input()
n = int(input())
numbers = list(map(int,input().split()))

for number in numbers:
    for i in range(number): print(s,end='')
    print()