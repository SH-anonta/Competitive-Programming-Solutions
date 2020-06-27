#Name: Sofen Hoque Anonta
__metaclass__ = type
import math
import sys
import heapq

# take space seperated numbers (of specified type) as input and return them as a list


def input_array(convert_type):
    return [convert_type(x) for x in raw_input().split()]  # put seperator in split()

# ####################################################

def CF803B():

    n= input()
    a= input_array(int)

    dist = [300000] * n
    for i in xrange(n):
        if a[i] == 0 :
            dist[i]= 0
            for j in xrange(1, n-i):
                if a[i+j] == 0: break
                dist[i+j] = min(dist[i+j], j)

            for j in xrange(1, i+1):
                if a[i-j] == 0: break
                dist[i-j] = min(dist[i-j], j)

    for x in dist:
        print x,


CF803B()
