import sys

def solve(arr):
    result = 0

    for x in arr:
        result = result ^ x

    return result


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    arr = [int(x) for x in input().split()]

    result = solve(arr)

    print(result)
