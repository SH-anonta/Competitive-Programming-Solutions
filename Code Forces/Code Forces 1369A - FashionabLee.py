import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())

  print('YES' if n % 4 == 0 else 'NO')


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
