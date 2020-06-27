import math
import sys
import itertools
import itertools
import collections

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n = int(input())
  s = input()

  cc = collections.defaultdict(int)

  for i in range(len(s)-1):
    cc[s[i:i+2]] += 1

  result = max(cc.items(), key= lambda x: x[1])[0]
  print(result)

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  # t = int(input())
  # for i in range(t):
  #   solve(i+1)
  solve(1)

