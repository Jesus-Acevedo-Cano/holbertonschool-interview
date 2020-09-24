#!/usr/bin/python3
"""
method that determines if a given data set represents a valid UTF-8 encoding
"""


def validUTF8(data):
    with open(data, encoding='utf-8') as f:
        if f:
            return True
        else:
            return False
