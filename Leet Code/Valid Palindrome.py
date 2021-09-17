class Solution:
    def isPalindrome(self, s: str) -> bool:
        l1 = ord('a')
        r1 = ord('z')
        
        l2 = ord('A')
        r2 = ord('Z')
        
        l3 = ord('0')
        r3 = ord('9')
        
        diff = ord('a') - ord('A')

        seq = [
            chr(ord(ch) - diff)  if l1 <= ord(ch) <= r1 else ch
            for ch in s 
            if  l1 <= ord(ch) <= r1 
            or l2 <= ord(ch) <= r2
            or l3 <= ord(ch) <= r3
        ]
        
        
        return seq == seq[::-1]