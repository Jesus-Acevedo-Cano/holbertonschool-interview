#!/usr/bin/python3
"""
Method that calculates the fewest number of operations
"""


def minOperations(n):

    count = 2
    if n == int or n < 1:
        return 0
    else:
        while n > 1:
            if n % 2 != 0:
                n = n + 1
                count += 1
            if n % 2 == 0:
                n = n / 2
                count += 1

    return count

"""
i = 1

n = 4

for j in range(n):
    if i <= n/2:
        i = i + i
        print (i, j)
    elif i > n/2 and i <= n - n%2 :
        i = i + n%2
        print (i, j)

             """
