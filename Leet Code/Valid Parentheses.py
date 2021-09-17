import sys


def solve(s):
    stack = []
    flipped = {
        ')': '(',
        '}': '{',
        ']': '[',
    }

    for ch in s:
        if ch in '({[':
            stack.append(ch)
        else:
            if len(stack) < 1 or stack[-1] != flipped[ch]:
                return False
            else:
                stack.pop()

    return len(stack) == 0


if __name__ == '__main__':
    # sys.stdin = open('./input.txt')
    # n = int(input())
    # arr = [int(x) for x in input().split()]
    s = input()
    result = solve(s)

    print(result)
