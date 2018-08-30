# Author: Sofen Hoque Anonta

import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n, m = readArray()
    arr = readArray()

    que = collections.deque([[i,x] for i, x in enumerate(arr)])

    last = None

    while len(que) > 0:
        front = que.popleft()

        front[1]-= m

        if front[1] > 0:
            que.append(front)

        last= front

    print(last[0]+1)


if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()
