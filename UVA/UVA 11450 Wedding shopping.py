'''
Author: Sofen Hoque Anonta
'''
import sys

def inputArray(TYPE):
    return [TYPE(x) for x in input().split()]


def maxLimitedSum(budget, c, prices):
    rechable = [[False] * (budget + 1) for _ in range(c)]

    for cost in prices[0]:
        left = budget - cost
        if left > -1:
            rechable[0][left]= True

    for gament_i in range(1, c):
        for cost in range(budget+1):
            if rechable[gament_i-1][cost]:

                for modle_price in prices[gament_i]:
                    if cost-modle_price > -1:
                        rechable[gament_i][cost-modle_price]= True

    ans= -1
    for x in range(budget+1):
        if rechable[c-1][x] is True:
            ans= x
            break

    return budget-ans if ans != -1 else ans



def solve():
    t= int(input())

    for case in range(1, t+1):
        prices= []

        m, c = inputArray(int)


        for x in range(c):
            prices.append(inputArray(int)[1:])

        ans = maxLimitedSum(m, c, prices)

        print('no solution' if ans == -1 else ans)



if __name__ == '__main__':
    # sys.stdin= open('F:/input.txt')
    solve()
