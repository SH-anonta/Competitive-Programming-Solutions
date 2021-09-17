class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        last_result = None
        c = 0
        
        for ch in s:
            if ch == ' ':
                c = 0
            else:
                c += 1
                last_result = c
                
        return last_result
        