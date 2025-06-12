n = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

frequencyA = dict()
for i in A:
    frequencyA[i] = frequencyA.get(i, 0) + 1

frequencyB = dict()
for i in B:
    frequencyB[i] = frequencyB.get(i, 0) + 1

if frequencyA == frequencyB:
    print("yes")
else:
    print("no")
