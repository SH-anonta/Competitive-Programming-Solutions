import sys
import math


def solve(arr):
    current_mx = -math.inf
    grand_mx = math.inf
    max_findings = []

    for _ in range(3):
        for x in arr:
            if current_mx < x < grand_mx:
                current_mx = x

        # print(current_mx)
        max_findings.append(current_mx)
        grand_mx = current_mx
        current_mx = -math.inf

    return grand_mx if grand_mx != -math.inf else max_findings[0]


if __name__ == '__main__':
    sys.stdin = open('./input.txt')
    arr = [int(x) for x in input().split()]

    result = solve(arr)

    print(result)
