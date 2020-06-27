import sys
import decimal
import collections
import math
import itertools as it

def readArray(type= int)
    line = input()
    return [type(x) for x in line.split()]

def solve()
    digits= []
    s = input()
    dash_began = False

    for x in s
        if dash_began
            dash_began = False
            digits.append('1' if x == '.' else '2')

        else
            if x == '-'
                dash_began= True
            else
                # Single . found
                digits.append('0')

    print(''.join(digits))

if __name__ == '__main__'
    sys.stdin = open('input.txt')
    solve()

