import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n, k, l, c, d, p, nl, np, = readArray()


    lc = (l*k)//(n*nl)
    slice = c*d
    limec = slice//n
    pc = p//(n*np)


    print(min(lc, limec, pc))



if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

