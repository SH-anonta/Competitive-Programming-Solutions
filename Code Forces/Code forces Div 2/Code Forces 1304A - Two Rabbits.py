import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def hasFraction(n):
  return (n - math.floor(n)) != 0

def solve(t):
  x, y, a, b = sa()

  t = (y - x) / (a + b)

  result = int(t)
  if t < 0 or hasFraction(t):
    result = -1

  print(result)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
