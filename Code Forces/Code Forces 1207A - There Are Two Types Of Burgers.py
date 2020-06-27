import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  b, p, f = sa()
  h, c = sa()

  if h < c:
    h, c = c, h
    p, f = f, p

  hSold = min(b//2, p)
  res = h * hSold
  b -= 2 * hSold

  fSold = min(b//2, f)
  res += c * fSold

  print(res)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
