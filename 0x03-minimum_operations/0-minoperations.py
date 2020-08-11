#!/usr/bin/python3
"""
Method that calculates the fewest number of operations
"""


def minOperations(n):

    count = 2
    if n == int or n <= 1:
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
