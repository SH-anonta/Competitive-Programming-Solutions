import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n = int(input())

    loc = 0
    roc = 0

    t = 0

    for x in range(n):
        l, r = readArray()

        loc += l
        roc += r

    t += n-loc if loc > n - loc else loc
    t += n-roc if roc > n - roc else roc

    print(t)

if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

