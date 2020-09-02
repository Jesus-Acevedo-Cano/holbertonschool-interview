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

if __name__ == "__main__":

    try:
        for line in fileinput.input():
            line = line.strip().split(' ')
            file_size += int(line[8])
            counter += 1
            status_code = line[7]
            print(line)
            for key, value in psc.items():
                if status_code == key:
                    psc[key] += 1
            if counter % 10 == 0:
                print('File size: {}'.format(file_size))
                for key in psc.keys():
                    if psc[key]:
                        print("{}: {}".format(key, psc[key]))

    except KeyboardInterrupt:
        print('File size: {}'.format(file_size))
        for key in psc.keys():
            if psc[key]:
                print("{}: {}".format(key, psc[key]))
