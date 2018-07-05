import sys
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def getFreq(arr):
    freq = collections.defaultdict(int)
    for x in arr:
        freq[x]+= 1

    return freq

def calcGrade(total, n):
    avg = round(.001+(total/n))
    return int(avg)

def solve():
    n = int(input())
    arr = readArray()

    cc= 0
    arr.sort()
    total = sum(arr)
    grade = calcGrade(total, n)

    for i, x in enumerate(arr):
        if grade == 5:
            break

        total -= x
        total += 5

        grade = calcGrade(total, n)
        cc += 1

    print(cc)

if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

