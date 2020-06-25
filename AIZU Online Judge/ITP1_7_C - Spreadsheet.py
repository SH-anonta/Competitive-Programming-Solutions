import sys

def sa(Type= int):
  return [Type(x) for x in input().split()]

def solve():
  r, c = sa()

  mat = []

  for _ in range(r):
    arr = sa()
    arr.append(sum(arr))

    mat.append(arr)

  arr = []
  for i in range(c+1):
    arr.append(sum([mat[x][i] for x in range(r)]))

  mat.append(arr)

  print('\n'.join([' '.join([str(s) for s in x]) for x in mat]))

if __name__ == '__main__':
  # sys.stdin = open('input.txt', 'r')
  solve()