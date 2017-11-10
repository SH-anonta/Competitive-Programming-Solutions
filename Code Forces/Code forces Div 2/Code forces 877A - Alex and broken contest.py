'''
Author: Sofen Hoque Anonta
'''

import re
import sys
import math
import itertools
import collections

def inputArray(TYPE= int):
    return [TYPE(x) for x in input().split()]


def solve():
    friend = ['Danil',  "Olya", "Slava", "Ann", "Nikita"]

    patt = re.compile('|'.join(friend))

    s = input()


    found = patt.findall(s)

    if len(found) == 1:
        print("YES")
    else:
        print("NO")




if __name__ == '__main__':
    # sys.stdin= open('F:/input.txt')
    solve()
