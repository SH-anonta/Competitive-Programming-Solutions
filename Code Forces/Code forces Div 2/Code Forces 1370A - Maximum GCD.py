
import math
import sys
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())

  if n % 2 != 0:
    n -= 1

  print(n//2)


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())

  for i in range(t):
    solve(i+1)