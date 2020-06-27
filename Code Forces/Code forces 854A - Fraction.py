'''
Author: Sofen Hoque Anonta
problem:
'''
import sys, math


def arrayInput(TYPE):
    return [TYPE(x) for x in input().split()]


def CF():
    n= int(input())

    l= 1
    r= n-1

    while l < r:
        if l+r == n:
            if math.gcd(l, r) == 1:
                mxl= l
                mxr= r
            l+= 1
            r-= 1
        elif l+r > n: r-= 1
        else: l+= 1

    print(mxl, mxr)


if __name__ == '__main__':
    # sys.stdin = open('F:/input.txt', 'r')
    CF()

