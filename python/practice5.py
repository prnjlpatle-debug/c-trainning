#WAP program which accept the kilometers covered and calculate the bill according to the following criteria:

km = float(input("Enter kilometers covered: "))
bill = 0
if km <= 10:
    bill = km * 5
elif km <= 20:
    bill = (10 * 5) + (km - 10) * 10
else:
    bill = (10 * 5) + (10 * 10) + (km - 20) * 15

print("Total Bill =", bill)