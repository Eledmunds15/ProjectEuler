#Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2.
#By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.


def findEvenFibSum(upperLim):
    ls = [1, 2];
    len = 2;
    sum = 0;

    while ls[len-1] < upperLim:
        if ls[len-1] % 2 == 0:
            sum += ls[len-1];
        ls.append((ls[len-1] + ls[len-2]));
        len += 1;

    return sum;

findEvenFibSum(4000000);

    

