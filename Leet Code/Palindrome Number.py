import math

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        elif x == 0:
            return True

        li = math.floor(math.log10(x))
        l_half = math.floor((li + 1) / 2)
        remaining_digits = x

        for i in range(l_half):
            l = math.floor(x / (10 ** li)) % 10
            r = remaining_digits % 10
            remaining_digits = math.floor(remaining_digits / 10)

            if l != r:
                return False

            li -= 1

        return True
