import sys


def solve(arr, target):
    if arr[-1] < target:
        return len(arr)
    elif arr[0] > target:
        return 0

    l = 0
    r = len(arr) - 1

    ans = None
    m = None
    while l <= r:
        m = l + (r - l) // 2
        print(l, r, m)

        if arr[m] == target:
            ans = m
            r = m - 1
        elif arr[m] > target:
            r = m - 1
        else:
            l = m + 1

    if ans is None:
        ans = m

    if arr[ans] < target:
        ans += 1

    return ans


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    x = int(input())
    arr = [int(x) for x in input().split()]
    result = solve(arr, x)

    print(result)
