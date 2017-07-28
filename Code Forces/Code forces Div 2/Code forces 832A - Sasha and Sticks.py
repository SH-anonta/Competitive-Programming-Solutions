'''
Author: Sofen Hoque Anonta
problem:
'''


def arrayInput(TYPE):
    return [TYPE(x) for x in input().split()]

def CF():
    n, k= arrayInput(int)



    if (n//k)%2 != 0 :
        print("YES")
    else:
        print("NO")



if __name__ == '__main__':
    CF()
