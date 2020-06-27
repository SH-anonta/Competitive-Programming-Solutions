import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  arr = sa()
  arr = list(enumerate(arr))
  arr.sort(key=lambda x : x[1], reverse=True)

  cc = 0
  x = 0

  for i, c in arr:
    cc += x*c + 1
    x += 1

  print(cc)
  print(' '.join(map(lambda x : str(x[0] +1), arr)))

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(1)

