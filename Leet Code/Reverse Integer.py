import sys


def solve(x):
    isNegative = x < 0
    x = str(x).strip('-')

    r = int(x[::-1])

    result = r if int(-2**31) <= r <= int(2**31) else 0

    if isNegative:
        result = -result

    return result


if __name__ == '__main__':
    # sys.stdin = open('./input.txt')
    # n = int(input())
    # arr = [int(x) for x in input().split()]
    x = int(input())
    result = solve(x)

    print(result)
