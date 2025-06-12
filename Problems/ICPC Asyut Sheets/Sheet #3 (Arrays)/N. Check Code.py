a, b = map(int, input().split())
code = input()

if a + b + 1 != len(code):
    print("No")
elif code[a] != '-':
    print("No")
else:
    counter = 0
    for i in range(len(code)):
        if code[i].isdigit() and i != a:
            counter += 1
    print("Yes" if counter == a + b else "No")
