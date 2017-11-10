'''
Author: Sofen Hoque Anonta
'''

import re
import sys
import math
import itertools
import collections

def inputArray(TYPE= int):
    return [TYPE(x) for x in input().split()]


def solve():
    day = 86400
    n, t = inputArray()
    a = inputArray()

    d = 0

    for x in a:
        if t <= 0:
            break

        t-= (day-x)

        d+= 1

    print(d)


if __name__ == '__main__':
    # sys.stdin= open('F:/input.txt')
    solve()
