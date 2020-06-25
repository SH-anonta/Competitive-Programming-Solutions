import sys

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(s):
  print(sum([int(x) for x in s]))

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  while True:
    s = input()
    if s == '0':
      break

    solve(s)