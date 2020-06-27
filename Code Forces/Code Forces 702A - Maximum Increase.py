import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  arr = sa()

  mx = 1
  current = 1
  prev = 1+10e9

  for i, x in enumerate(arr):
    if prev < x:
      current += 1
    else:
      current = 1

    mx = max(current, mx)
    prev = x

  print(mx)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(0)
