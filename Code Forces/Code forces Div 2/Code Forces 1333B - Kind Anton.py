import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  a = sa()
  b = sa()

  firstPosIdx = 10e9
  firstNegIdx = 10e9

  for i, x in enumerate(a):
    if x == 1:
      firstPosIdx = i
      break

  for i, x in enumerate(a):
    if x == -1:
      firstNegIdx = i
      break

  possible = True

  for i, x in enumerate(b):
    direction = x - a[i]

    if (direction > 0 and i <= firstPosIdx) or (direction < 0 and i <= firstNegIdx):
      possible = False

  print('YES' if possible else 'NO')

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
