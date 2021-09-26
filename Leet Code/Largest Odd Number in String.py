class Solution:
    def largestOddNumber(self, s: str) -> str:
        i = len(s) - 1
        
        while i > -1:
            if int(s[i]) % 2 != 0:
                break
                
            i -= 1
        
        return s[:i+1]
        