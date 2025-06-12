start,end = 0,1
n = int(input())
if(n==1):   print(start)
elif(n==2): print(end)
else:
    for i in range(2,n):
        start,end = end,start+end
    print(end)