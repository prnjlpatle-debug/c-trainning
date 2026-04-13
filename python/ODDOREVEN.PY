num = int(input("Enter a number: "))
even_count = 0
odd_count = 0
print("Even factors are:")
for i in range(1, num + 1):
    if num % i == 0 and i % 2 == 0:
        print(i)
        even_count += 1
print("Odd factors are:")
for i in range(1, num + 1):
    if num % i == 0 and i % 2 != 0:
        print(i)
        odd_count += 1
print("Total even factors:", even_count)
print("Total odd factors:", odd_count)