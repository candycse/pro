hrs = input("Enter hours: ")
rate = input("Enter rate: ")
try:
    fHrs = float(hrs)
    fRate = float(rate)
except:
    print("Not a number")
    exit()
if fHrs > 40:
    reg = fHrs * fRate
    otp = (fHrs - 40.0) * (fRate * 0.5)
    grossPay = reg + otp
else:
    grossPay = fHrs * fRate
print(grossPay)

