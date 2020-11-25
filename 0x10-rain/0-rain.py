#!/usr/bin/python3
""" rain excercise """


def rain(walls):
    """ calculate contained raindrops """
    raindrops = 0
    if not walls:
        return 0
    for i in range(len(walls)):
        raindrops += walls[i]
        if walls[i] == 0:
            raindrops -= 1
    return raindrops
