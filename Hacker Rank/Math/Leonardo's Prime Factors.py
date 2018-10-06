import sys
import math
import collections


def isPrime(val)
    for x in range(2, val)
        if val % x == 0
            return False

    return True

def getPrimes()
    n = 100

    return [
        x for x in range(2, n) if isPrime(x)
    ]


def readArray(type= int)
    line = input()
    return [type(x) for x in line.split()]

def processQuery(n, primes)
    cc = 0
    prod = 1
    for x in primes
        prod = x

        if prod  n
            break

        cc+= 1

    return cc

def solve()
    primes = getPrimes()
    q = int(input())

    for _ in range(q)
        n = int(input())
        print(processQuery(n, primes))



if __name__ == '__main__'
    # sys.stdin = open('input.txt')
    solve()

