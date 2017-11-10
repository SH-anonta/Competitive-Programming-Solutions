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
    n, k, x = inputArray()

    arr = inputArray()

    print(sum(itertools.islice(arr, 0, n-k)) + k*x)


if __name__ == '__main__':
    #sys.stdin= open('F:/input.txt')
    solve()
