import sys

def solve(arr):
    seen_numbers = set()

    for x in arr:
        if x in seen_numbers:
            return True

        seen_numbers.add(x)

    return False


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    arr = [int(x) for x in input().split()]

    result = solve(arr)

    print(result)
