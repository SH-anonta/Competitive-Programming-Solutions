#Name: Sofen Hoque Anonta
__metaclass__ = type

def findSum(n, r,c, lim, grid):
    for i in range(lim):
        for j in range(lim):
            if grid[r][i] + grid[j][c] == n: return True

    return False


def CF281A():
    n= input()

    grid= []

    for i in range(n):
        grid.append(raw_input())


    ngrid= []

    for r in range(n):
        ngrid.append([int(a) for a in grid[r].split()])


    for r in range(n):
        for c in range(n):
            if  ngrid[r][c] == 1: continue
            if not findSum(ngrid[r][c], r, c, n,ngrid):
                print "No"
                return

    print "Yes"

# ####################################################
CF281A()
