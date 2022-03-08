#The prime factors of 13195 are 5, 7, 13 and 29.
#What is the largest prime factor of the number 600851475143?

#Note: try to reduce time complexity of isPrime(num)
from math import sqrt;

def isPrimeSqrt(num): #function to check if number is a prime O(sqrt(n))
    if num <= 1:
        return False;
    
    for i in range(2, int(sqrt(num)+1)):
        if num % i == 0:
            return False

    return True;

def findBigPF(upperLimit): #find the largest prime factor of upperLimit
    for i in range(int(sqrt(upperLimit)+1), 2, -2):
        if upperLimit % i == 0 and isPrimeSqrt(i) == True:
            return i;

findBigPF(600851475143);
