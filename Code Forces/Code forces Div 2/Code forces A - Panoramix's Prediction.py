import itertools
import sys
import decimal
import collections
import math
import itertools as it

def readArray(type= int):
    line = input()
    return [type(x) for x in line.split()]

primes = None

def genPrimes():
    global  primes

    n = 100
    primes = [True] * n

    primes[0] = primes[1] = False
    lim = round(math.sqrt(n))

    for x in range(3, lim, 2):
        if not primes[x]:
            continue

        for nx in range(x*x, n, 2*x):
            primes[nx]= False

    return primes

def isPrime(n):
    global primes
    return n == 2  or primes[n] and n%2 != 0

def getNextPrime(x):
    global primes

    if x == 2:
        return 3

    for i in range(x+2, 100, 2):
        if primes[i]:
            return i

def solve():
    global primes
    primes = genPrimes()

    a, b = readArray()


    print('YES' if b == getNextPrime(a) else 'NO')

    # for p, x in enumerate(primes):
    #     if x and p % 2 != 0:
    #         print(p)

if __name__ == '__main__':
    # sys.stdin = open('input.txt')
    solve()

