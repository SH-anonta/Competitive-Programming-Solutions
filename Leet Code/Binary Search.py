class Solution:
    def search(self, arr: List[int], target: int) -> int:
        l = 0
        r = len(arr) - 1

        while l <= r:
            m = l + (r - l) // 2

            if arr[m] == target:
                return m
            elif arr[m] < target:
                l = m + 1
            else:
                r = m - 1

        return -1
