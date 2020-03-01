t = int(input())

while(t > 0):
    n = int(input())
    
    arr = [int(x) for x in input().split()]
    
    total = sum(arr)
    mx = max(arr)
    
    print("Yes" if total - mx > mx else "No")
    
    t-= 1