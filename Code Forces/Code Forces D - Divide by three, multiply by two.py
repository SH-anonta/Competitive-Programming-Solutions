import math
import sys
import itertools
import itertools
import collections

def sa(Type= int):
  return [Type(x) for x in input().split()]

def countFactors(n, factor):
  if n % factor != 0:
    return 0

  cc = 1
  product = factor
  while True:
    product *= factor

    if product > n:
      break

    if n % product == 0:
      cc += 1

  return cc

def solve(t):
  n = int(input())
  arr = sa()

  arr = [(x, countFactors(x, 3)) for x in arr]
  arr.sort(key= lambda x: (x[1], -x[0]), reverse=True)

  # print(arr)

  print(' '.join(map(lambda x: str(x[0]), arr)))

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(1)

