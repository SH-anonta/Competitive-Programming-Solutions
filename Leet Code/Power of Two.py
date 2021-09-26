class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        bit_count = 0
        
        while n > 0:
            if n & 1:
                bit_count += 1

            n = n >> 1
            
        return bit_count == 1