import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  s = input()

  cc = 0
  inXBlock= False
  prev = ' '
  xLen = 0
  for ch in s:
    inXBlock = ch == 'x'

    if not inXBlock:
      xLen = 0
    else:
      xLen += 1

    if xLen > 2:
      cc += 1

    prv = ch

  print(cc)


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(0)
