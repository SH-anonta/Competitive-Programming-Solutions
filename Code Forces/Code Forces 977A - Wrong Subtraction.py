import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n, k = sa()

  for x in range(k):
    if n % 10 == 0:
      n //= 10
    else:
      n -= 1

  print(n)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(0)