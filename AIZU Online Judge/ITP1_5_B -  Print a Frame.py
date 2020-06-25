import sys

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve(h, w):
  row = ['.']*w
  row[0] = '#'
  row[-1] = '#'
  row = ''.join(row)

  frame = [row]*h
  frame[0] = '#'*w
  frame[-1] = '#'*w

  print('\n'.join(frame))
  print()

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  while True:
    h, w = sa()

    if h == 0 and w == 0:
      break

    solve(h, w)