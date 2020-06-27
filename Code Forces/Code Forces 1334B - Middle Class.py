import math
import sys
import itertools
import itertools

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(t):
  n, r = sa()
  arr = sa()

  arr.sort(reverse=True)
  cc = 1 if arr[0] >= r else 0
  acc = arr[0]
  average = 0

  # print('----------')
  for i, x in enumerate(itertools.islice(arr, 1, len(arr))):
    acc += x
    average = acc / (i+2)

    # print(average, i)

    if average >= r:
      cc += 1
    else:
      break

  print(cc)


if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  t = int(input())
  for i in range(t):
    solve(i+1)
