import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def solve():
    n = int(input())
    arr = readArray()
    m = int(input())
    qarr = readArray()

    a = 0
    b = 0

    freq = collections.defaultdict(list)

    for i, x in enumerate(arr):
        freq[x].append(i+1)

    for x in qarr:
        a+= freq[x][0]
        b+= n-freq[x][-1]+1

    print(a, b)

if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

