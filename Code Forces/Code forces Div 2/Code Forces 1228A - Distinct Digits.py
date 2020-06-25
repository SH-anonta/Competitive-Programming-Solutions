import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def isValid(n):
  digitCounts = [0] * 10

  while n > 0:
    digit = int(n % 10)
    digitCounts[digit] += 1
    n //= 10

    if digitCounts[digit] > 1:
      return False

  return True

def solve(t):
  l, r = sa()

  for x in range(l, r+1):
    if isValid(x):
      print(x)
      return

  print(-1)


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(0)

