class Solution:
    def climbStairs(self, n: int) -> int:
        self.memo = {}

        return self.combo_count(n)
        
    def combo_count(self, n):
        if n == 0:
            return 1
        
        if n < 0:
            return 0
        
        cached_result = self.memo.get(n)
        if cached_result is not None:
            return cached_result
        
        cc = self.combo_count(n - 1) + self.combo_count(n - 2)
        self.memo[n] = cc

        return cc