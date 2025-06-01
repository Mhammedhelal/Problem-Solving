import re
input = input()
a,op,b = re.split('([\+\*\-/])',input,maxsplit=1)
  

match op:
    case '+': print(int(a)+int(b))
    case '-': print(int(a)-int(b))
    case '*': print(int(a)*int(b))
    case '/': print(int(int(a)/int(b)))