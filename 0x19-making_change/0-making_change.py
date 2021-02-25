#!/usr/bin/python3
""" Module Making Change """


def makeChange(coins, total):
    """ Determine the fewest number of coins needed to meet a given amount.
        Args:
            coins: List of the coins in your possession.
            total: Total coins.
        Return:
            Number of coins needed to meet total.
    """

    if total <= 0:
        return 0
    if coins is None or coins == []:
        return -1
    coins = sorted(coins, reverse=True)
    counter = 0
    for i in coins:
        if i <= total:
            counter += int(total / i)
            total = total % i
        if total == 0:
            return counter
    return -1
