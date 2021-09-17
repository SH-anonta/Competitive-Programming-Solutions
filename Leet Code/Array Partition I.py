import sys


def solve(arr):
    arr.sort()

    total = 0
    i = 0
    n = len(arr)
    while i < n - 1:
        total += arr[i]
        i += 2

    return total


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    arr = [int(x) for x in input().split()]

    result = solve(arr)

    print(result)
