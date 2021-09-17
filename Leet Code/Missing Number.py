import sys


def solve(arr):
    total = sum(arr)
    count = len(arr) + 1
    expected = (count * (count - 1)) // 2

    return expected - total


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    arr = [int(x) for x in input().split()]

    result = solve(arr)

    print(result)