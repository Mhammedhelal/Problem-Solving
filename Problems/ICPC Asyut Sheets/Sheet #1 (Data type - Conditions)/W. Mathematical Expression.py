a, op, b, eq, res = input().split()
a,b,res = int(a),int(b),int(res)

match op:
    case '+': 
        if a+b == res: print("Yes")
        else: print(int(a+b))
    case '-': 
        if a-b == res: print("Yes")
        else: print(int(a-b))
    case '*': 
        if a*b == res: print("Yes")
        else: print(int(a*b))
            