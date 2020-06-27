'''
Author: Sofen Hoque Anonta
problem:
'''
import sys, math


def arrayInput(TYPE):
    return [TYPE(x) for x in input().split()]


def CF():
    n, k= arrayInput(int)

    if n == k or k == 0:
        print(0, 0)
        return

    mn = 1
    mx = n-k

    if mx >= 2*k: mx = 2*k

    print(mn, mx)




if __name__ == '__main__':
    # sys.stdin = open('F:/input.txt', 'r')
    CF()

