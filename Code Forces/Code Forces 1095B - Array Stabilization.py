import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  arr = sa()

  arr.sort()

  if len(arr) == 2:
    print(0)
    return

  mnDiff = arr[1] - arr[0]
  mxDiff = arr[-1] - arr[-2]

  if mnDiff > mxDiff:
    print(arr[-1] - arr[1])
  else:
    print(arr[-2] - arr[0])

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(1)
