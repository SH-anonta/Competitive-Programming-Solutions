'''
Author: Sofen Hoque Anonta
problem:
'''
import sys, math

MOD= 1000000
cache= None

def arrayInput(TYPE):
    return [TYPE(x) for x in input().split()]

def minCost(costs, x, y, destcol):
    wind_strength= costs[x][y]
    # print(x, y, wind_strength)

    global cache

    if y == destcol:
        # always sink at the last column
        if x < 2:
            return (30 if x == 0 else 20) - wind_strength
        else:
            return 10000000

    # if not cache[x][y]: return cache[x][y]

    if cache[x][y]: return cache[x][y]

    si= ri = 100000000


    ho=  minCost(costs, x, y+1, destcol) + 30
    if x < 9:
        ri= minCost(costs, x+1, y+1, destcol) + 60
    if x > 0:
        si= minCost(costs, x-1, y+1, destcol) + 20

    mn= min(ri, si, ho)
    cache[x][y]= mn - wind_strength

    return cache[x][y]

def CF():
    n= int(input())
    costs= []

    for t in range(n):
        _= input()
        x= int(input())

        global cache
        cache = [[None] * (x + 1) for _ in range(10)]

        for row in range(10):
            costs.append(arrayInput(int))

        costs.reverse()
        # for row in range(10):
        #     print(row,'->',costs[row])
        # input()
        print(minCost(costs, 0, 0, x/100-1))
        print()



if __name__ == '__main__':
    # sys.stdin = open('F:/input.txt', 'r')
    CF()

