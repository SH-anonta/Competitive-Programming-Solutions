#Name: Sofen Hoque Anonta
__metaclass__ = type
import math
import sys
import heapq

# take space seperated numbers (of specified type) as input and return them as a list


def input_array(convert_type):
    return [convert_type(x) for x in raw_input().split()]  # put seperator in split()

# ####################################################

def CF831A():
    a= raw_input()
    b= raw_input()
    s= raw_input()

    a= a.lower()
    b= b.lower()


    ra= {}

    for x in range(26):
        ra[a[x]]= x

    ans = []

    upper= False
    for x in s:
        if not x.isalpha():
            ans.append(x)
            continue

        upper= x.isupper()
        x= x.lower()

        t= b[ra[x]]

        if upper: t= t.upper()

        ans.append(t)
        upper = False

    print "".join(ans)

CF831A()