# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):


class Solution:
    def firstBadVersion(self, n):
        if n == 1:
            return 1

        l = 1
        r = n

        m = None

        while l < r:
            m = l + (r - l) // 2
            if isBadVersion(m):
                r = m
            else:
                l = m + 1

        if not isBadVersion(m):
            m += 1

        return m