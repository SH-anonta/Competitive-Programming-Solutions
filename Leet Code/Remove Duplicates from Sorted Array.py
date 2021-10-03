class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        cc = 0
        for i, x in enumerate(nums):
            if i < n - 1 and nums[i] == nums[i + 1]:
                cc += 1
                nums[i] = math.inf
        
        nums.sort()
        
        return n - cc