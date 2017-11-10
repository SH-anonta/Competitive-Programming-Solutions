'''
Author: Sofen Hoque Anonta
'''

import sys
import math
import itertools
import collections

def inputArray(TYPE= int):
    return [TYPE(x) for x in input().split()]

def isEqual(arr, idx, sum, target):
    if sum == target:
        return True

    if idx < 0:
        return False

    return isEqual(arr, idx-1, sum+arr[idx], target) or isEqual(arr, idx-1, sum, target)

def solve():
    m = int(input())

    for _ in range(m):
        arr= inputArray()

        n= len(arr)
        total = sum(arr)

        if total % 2 == 0 and isEqual(arr, n-1, 0, total//2):
            print("YES")
        else:
            print("NO")

if __name__ == '__main__':
    # sys.stdin= open('F:/input.txt')
    solve()
