import sys


def solve(m, n, ops):
    mn_x = m
    mn_y = n

    for op in ops:
        mn_x = min(mn_x, op[0])
        mn_y = min(mn_y, op[1])

    return mn_x * mn_y


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    m, n = [int(x) for x in input().split()]
    ops = [int(x) for x in input().split()]

    result = solve(m, n, ops)

    print(result)
