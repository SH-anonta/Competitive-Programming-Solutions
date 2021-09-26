class Solution:
    def twoSum(self, arr: List[int], target: int) -> List[int]:
        l = 0
        r = len(arr) - 1
        
        while l < r:
            total = arr[l] + arr[r]
            
            if total == target:
                return l + 1, r + 1
            elif total < target:
                l += 1
            else:
                r -= 1
