import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  a, b, n = sa()

  steps = 0

  while a <= n and b <= n:
    if a < b:
      a += b
    else:
      b += a

    steps += 1

  print(steps)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())

  for i in range(t):
    solve(i+1)