class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0

        cc = 32
        while cc:
            lmb = n & 1
            result = result << 1
            result = result | lmb
            n = n >> 1
            cc -= 1
        
        return result
            
            