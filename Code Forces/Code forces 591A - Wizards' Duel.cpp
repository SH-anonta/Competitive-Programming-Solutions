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
    d= int(input())
    p= int(input())
    q= int(input())

    print(p*d/(p+q))


if __name__ == '__main__':
    # sys.stdin= open('F:/input.txt')
    solve()
