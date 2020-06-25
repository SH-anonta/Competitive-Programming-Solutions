import sys
import _collections

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve():
  ff = _collections.defaultdict(int)

  mn = ord('a')
  mx = ord('z')

  s = sys.stdin.read()
  for ch in s:
    ch = ch.lower()
    chc = ord(ch)

    if mn <= chc <= mx:
      ff[ch]+= 1

  for chc in range(mn, mx+1):
    ch = chr(chc)
    print('{} : {}'.format(ch, ff[ch]))

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')

  solve()