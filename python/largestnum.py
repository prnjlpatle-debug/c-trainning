#WAP to find the largest of three number
#Input:enter 3 num :78,56,100
#Output:greatest out of 3:100
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))
if a >= b and a >= c:
    greatest = a
elif b >= a and b >= c:
    greatest = b
else:
    greatest = c

