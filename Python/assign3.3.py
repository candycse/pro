score = input("Enter Score ")
try:
    sf = float(score)
except:
    print("Not a number")
    exit()
if 0.0 <= sf <= 1.0:
    if sf>=0.9:
        print("A")
    elif sf>=0.8:
        print("B")
    elif sf>=0.7:
        print("C")
    elif sf>=0.6:
        print("D")
    else:
        print("F")
else:
    print("Score must be in range of 0.0 to 1.0")



