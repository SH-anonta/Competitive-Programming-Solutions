# Author: Sofen Hoque Anonta
# Problem: A. Supercentral Point

import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n = int(input())

    points = []
    for x in range(n):
        points.append(readArray())

    xfreq = collections.defaultdict(list)
    yfreq = collections.defaultdict(list)

    for p in points:
        xfreq[p[0]].append(p)
        yfreq[p[1]].append(p)


    cc = 0
    for p in points:
        nb = 0

        # upper neighbours
        for q in xfreq[p[0]]:
            if(q[1] > p[1]):
                nb+= 1
                break

        # lower neighbours
        for q in xfreq[p[0]]:
            if (q[1] < p[1]):
                nb += 1
                break

        # left neighbours
        for q in yfreq[p[1]]:
            if (q[0] < p[0]):
                nb += 1
                break

        # right neighbours
        for q in yfreq[p[1]]:
            if (q[0] > p[0]):
                nb += 1
                break

        if nb == 4:
            cc+= 1

    print(cc)

if __name__ == '__main__':
    sys.stdin = open('input.txt')
    solve()
