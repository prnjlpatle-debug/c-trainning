num = 12
even_factors = []
odd_factors = []
for i in range(1, num + 1):
    if num % i == 0:   
        if i % 2 == 0:
            even_factors.append(i)
        else:
            odd_factors.append(i)

print("Even Factors:", even_factors)
print("Odd Factors:", odd_factors)