# Author: Sofen Hoque Anonta

import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n= int(input())
    arr = readArray()
    tot = sum(arr)

    cc = 0

    for x in range(1,6):
        if (tot+x)% (n+1) == 1:
            cc+= 1

    print(5-cc)


if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

