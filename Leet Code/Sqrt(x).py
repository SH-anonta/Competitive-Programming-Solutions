class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0:
            return 0
        elif x == 1:
            return 1

        l = 0
        r = x

        while l < r:
            m = (l + r) / 2
            m_squared = m * m

            if abs(m_squared - x) < 0.001:
                return int(m)
            elif m_squared < x:
                l = m
            else:
                r = m

