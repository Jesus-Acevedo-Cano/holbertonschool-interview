#!/usr/bin/python3
import sys
import fileinput

psc = {
    "200": 0,
    "301": 0,
    "400": 0,
    "401": 0,
    "403": 0,
    "404": 0,
    "405": 0,
    "500": 0
    }
file_size = 0
counter = 0


def print_metrics():
    """ function to print metrics """
    try:
        print('File size: {}'.format(file_size))
        for key in sorted(psc.keys()):
            if psc[key]:
                print("{}: {}".format(key, psc[key]))
    except:
        pass

if __name__ == "__main__":
    try:
        for line in sys.stdin:
            line = line.strip().split(' ')
            file_size += int(line[8])
            counter += 1
            status_code = line[7]

            for key in sorted(psc.keys()):
                if status_code == key:
                    psc[key] += 1
            if counter % 10 == 0:
                print_metrics()

    except KeyboardInterrupt:
        print_metrics()
        raise
    print_metrics()
