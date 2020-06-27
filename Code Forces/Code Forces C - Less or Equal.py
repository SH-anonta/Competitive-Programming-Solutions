import math
import sys
import itertools
import itertools
import collections

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n, k = sa()
  arr = sa()

  if k == 0:
    mn = min(arr)
    print(-1 if mn == 1 else mn - 1)
    return

  arr.sort()

  cc = 0
  lastVal = 0
  lastIdx = 0
  for i, a in enumerate(arr):
      cc += 1
      lastVal = a
      lastIdx = i

      if cc == k:
        break

  if lastIdx < n-1 and arr[lastIdx+1] == lastVal:
    print(-1)
  else:
    print(lastVal)


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(1)

