#Name: Sofen Hoque Anonta
__metaclass__ = type
import math

# take space seperated numbers (of specified type) as input and return them as a list


def input_array(convert_type):
    return [convert_type(x) for x in raw_input().split()]  # put seperator in split()

# ####################################################

n, m = input_array(int)

s= raw_input()
t= raw_input()

mn= 100000000000
mnSeq= []

for i in range(m-n+1):
    miss= 0
    seq= []
    for j in range(n):
        if(t[i+j]!=s[j]):
            seq.append(j)
            miss+= 1
    if mn > miss:
        mn = miss
        mnSeq= seq


print mn
for x in mnSeq:
    print x+1,