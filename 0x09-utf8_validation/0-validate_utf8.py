#!/usr/bin/python3
import sys
"""
method that determines if a given data set represents a valid UTF-8 encoding
"""


def validUTF8(data):
    for i in data:
        try:
            s = i.decode('utf-8')
        except:
            return False
        return True
