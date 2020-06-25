import sys

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve():
  seen = set()
  n = int(input())

  for _ in range(n):
    line = input()
    seen.add(line)

  types = ['S', 'H', 'C', 'D']

  for t in types:
    for i in range(1, 14):
      card = '{} {}'.format(t, i)
      if card not in seen:
        print(card)



if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')
  solve()