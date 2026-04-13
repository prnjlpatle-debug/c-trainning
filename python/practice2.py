#WAP Determine if a triangle is equilateral,isosceles ,or scalene
a = int(input("Enter side 1:5 "))
b = int(input("Enter side 2: 5"))
c = int(input("Enter side 3: 6"))
if a == b == c:
    print("Triangle is Equilateral")
elif a == b or b == c or a == c:
    print("Triangle is Isosceles")
else:
    print("Triangle is Scalene")