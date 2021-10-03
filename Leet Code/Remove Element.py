class Solution
    def removeElement(self, arr List[int], val int) - int
        cc = 0
        for i, x in enumerate(arr)
            if x == val
                cc += 1
                arr[i] = math.inf
                
        arr.sort()
        return len(arr) - cc