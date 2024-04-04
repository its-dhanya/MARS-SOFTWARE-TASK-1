def prime_factors(n):
    factors = set()
 
    while n % 2 == 0:
        factors.add(2)
        n //= 2
    
    for i in range(3, int(n**0.5) + 1, 2):
        while n % i == 0:
            factors.add(i)
            n //= i
    
    if n > 2:
        factors.add(n)
    return factors

def consecutive_four_distinct_prime_factors():
    count = 0
    num = 1
    while True:
        if len(prime_factors(num)) == 4:
            count += 1
        else:
            count = 0
        if count == 4:
            return num - 3  # Return the first number of the four consecutive integers
        num += 1
