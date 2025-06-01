x = float(input())

if (x > 100 or x < 0): 
    print("Out of Intervals")

else:
    print("Interval",end=" ")
    if x >= 0 and x <= 25: print("[0,25]")
    elif x > 25 and x <= 50: print("(25,50]")
    elif x > 50 and x <= 75: print("(50,75]")
    elif x > 75 and x <= 100: print("(75,100]")