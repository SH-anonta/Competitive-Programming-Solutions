class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        num1 = num1[::-1]
        num2 = num2[::-1]
        
        digits = []
        carry = 0
        
        n = max(len(num1), len(num2))
        for i in range(n):
            a = num1[i] if i < len(num1) else 0
            b = num2[i] if i < len(num2) else 0
            
            total = int(a) + int(b) + carry
            carry = 1 if total > 9 else 0
            digit = total if total < 10 else total % 10
            
            digits.append(str(digit))
            
        
        if carry != 0:
            digits.append(str(carry))
            
            
        return ''.join(digits[::-1])
            