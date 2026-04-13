#WAP to print numbers 1 to 50 and check if the number is divible of 3 and 5 or both 3 and 5...
for i in range(1,51):
    if i%3==0 and i%5==0:
        print("FizzBuzz")
    elif i%5==0:
        print("Buzz")
    elif i%3==0:
        print("Fizz")
    else:
        print(i)