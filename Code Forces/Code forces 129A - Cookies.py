#Name: Sofen Hoque Anonta

__metaclass__ = type


def CF129A():
    n= input()

    s= raw_input()
    a= [int(x) for x in s.split()]
    total= sum(a)

    c= 0
    for x in a:
        if((total - x)%2 == 0):
            c+= 1

    print c

#####################################################
CF129A()