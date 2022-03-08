#A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
#Find the largest palindrome made from the product of two 3-digit numbers.

#Note: maximum number made by two three-digit numbers is ... 999*999 = 998001

def isPalin(num):
    arr = list(str(num));
    revArr = [];

    for i in range(len(arr)-1, -1, -1):
        revArr.append(arr[i]);
    
    return arr == revArr;

def findBigPalin():
    for i in range(999,1,-1):
        if(isPalin(999*i)):
            return str(999*i) + ', ' + str(i);

    

