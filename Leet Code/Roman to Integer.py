import math

class Solution:
    def romanToInt(self, s: str) -> int:

        if s == 'IX':
            return 9
        if s == 'IV':
            return 4

        mapping = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }

        val = 0
        last_added_val = -math.inf
        for ch in reversed(s):
            current_val = mapping[ch]
            times = -1 if last_added_val > current_val else 1
            val += times * current_val

            last_added_val = mapping[ch]

        return val
