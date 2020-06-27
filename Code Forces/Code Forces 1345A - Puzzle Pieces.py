import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n, m = sa()

  if n > m:
    n, m = m, n

  if n == 1:
    print('YES')
  elif n == 2 and m == 2:
    print('YES')
  else:
    print('NO')



if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
