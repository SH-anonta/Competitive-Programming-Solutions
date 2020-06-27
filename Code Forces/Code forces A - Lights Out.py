import sys
import decimal
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

def cellIsValid(x, y):
    return 3 > x > -1 and 3 > y > -1

def invert(x):
    return (x+1)%2

def toggleCells(grid, r, c, n):
    if n % 2 == 0 or n == 0:
        return

    dx = [0, 0, 1, -1, 0]
    dy = [0, 1, 0, 0, -1]

    for x, y in zip(dx, dy):
        nr= r+x
        nc= c+y

        if(cellIsValid(nr, nc)):
            grid[nr][nc]= invert(grid[nr][nc])

def solve():
    grid = [[1]*3 for _ in range(3)]
    press_count= []

    for x in range(3):
        press_count.append(readArray())


    for r, row in enumerate(press_count):
        for c, x in enumerate(row):
            toggleCells(grid, r,c, x)

    for row in grid:
        print(''.join([str(x) for x in row]))

if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

