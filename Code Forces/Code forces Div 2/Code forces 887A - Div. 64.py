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
    s = input()

    z = 0
    pos = 0
    for x in s[::-1]:
        pos+= 1
        if x == '0':
            z+= 1
            if z == 6:
                break


    print('yes' if '1' in s[:-pos] else 'no')

if __name__ == '__main__':
    #sys.stdin= open('F:/input.txt')
    solve()
