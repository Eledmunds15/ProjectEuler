# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
# The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000.

#Bottom solutions has time complexity O(n), where n is the size of 'upperLim', since it only has to iterate through all the items from 0 to 'upperLim'
def findMultiples(upperLim):
    sum, item = 0, 0;

    while item < upperLim:
        if (item % 3 == 0) or (item % 5 == 0):
            sum += item;
        item += 1;

    return sum

findMultiples(23);