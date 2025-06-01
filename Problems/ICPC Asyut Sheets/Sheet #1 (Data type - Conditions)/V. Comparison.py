a, comp, b = input().split()
a,b = int(a), int(b)
if comp == '=' and a==b or comp=='>'and a>b or comp=='<'and a<b:
    print("Right")
else:
    print("Wrong")