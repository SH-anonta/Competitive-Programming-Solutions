import sys
import collections
import math
import itertools as it

def readArray(type= int)
    line = input()
    return [type(x) for x in line.split()]

def getFreq(arr)
    freq = collections.defaultdict(int)
    for x in arr
        freq[x]+= 1

    return freq

def  getNearestLargerMultiple(n, m)
    return math.ceil(nm)

def  getNearestSmallerMultiple(n, m)
    return nm


def solve()
    n, m, a, b = readArray()

    cost = 0

    ex_cost = nb

    if n = m
        cost = (m-n)a
    else
        costa = (n-m)b
        costb = (m  getNearestLargerMultiple(n, m) - n)  a
        costc = abs(m  getNearestSmallerMultiple(n, m) - n)  b

        cost = min(costa, costb, costc)

    print(min(cost, ex_cost))


if __name__ == '__main__'
    # sys.stdin = open('input.txt')
    solve()

