#!/usr/bin/python3
"""
Method that calculates the fewest number of operations
"""


def minOperations(n):

    count = 0
    div = 2
    if not isinstance(n, int) or n <= 1:
        return 0
    while n > 1:
        if n % div != 0:
            div += 1
        n = n / div
        count += div

    return count
