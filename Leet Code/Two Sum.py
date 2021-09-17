import sys


def solve(arr: list, target):
    arr = list(enumerate(arr))
    arr.sort(key=lambda o: o[1])

    l = 0
    r = len(arr) - 1

    while l < r:
        total = arr[l][1] + arr[r][1]

        if total == target:
            return arr[l][0], arr[r][0]
        elif total < target:
            l += 1
        else:
            r -= 1


if __name__ == '__main__':
    # sys.stdin = open('./input.txt')
    n = int(input())
    arr = [int(x) for x in input().split()]
    l, r = solve(arr, n)

    print(l, r)
