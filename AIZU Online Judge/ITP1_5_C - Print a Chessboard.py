# Author: Sofen Hoque Anonta

import math
import sys

def sa(Type= int):
    return [Type(x) for x in input().split()]

def solve(h, w):
    pats = ['#.', '.#']

    patIdx = 0

    for i in range(h):
        result = pats[patIdx]*math.ceil(w/2)
        print(result[:w])

        patIdx = 1 if patIdx == 0 else 0
        
    print()

if __name__ == '__main__':
    # sys.stdin = open('input.txt', 'r')

    while True:
        h, w = sa()

        if h == 0 and w == 0:
            break

        solve(h, w)