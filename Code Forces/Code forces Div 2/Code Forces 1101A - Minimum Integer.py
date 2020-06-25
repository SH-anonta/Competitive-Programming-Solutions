import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  l, r, d = sa()
  x = d

  if l <= d <= r:
    p = (r//d)+1
    print(p*d)
  else:
    print(d)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
