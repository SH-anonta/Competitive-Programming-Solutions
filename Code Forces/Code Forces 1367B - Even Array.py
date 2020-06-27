import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = input()
  arr = sa()

  oddInEven = 0
  evenInOdd = 0

  for idx, x in enumerate(arr):
    xOdd = x % 2 == 1
    iOdd = idx % 2 == 1

    if xOdd and not iOdd:
      oddInEven += 1
    elif not xOdd and iOdd:
      evenInOdd += 1

  ans = None
  if oddInEven == evenInOdd:
      ans = oddInEven
  else:
    ans = -1

  print(ans)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
