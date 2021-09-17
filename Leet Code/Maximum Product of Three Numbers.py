import math


class Solution(object):
    def maximumProduct(self, nums):
        mn_a = math.inf
        mn_b = math.inf

        mx_a = -math.inf
        mx_b = -math.inf
        mx_c = -math.inf

        for x in nums:
            if x > mx_a:
                mx_c = mx_b
                mx_b = mx_a
                mx_a = x
            elif x > mx_b:
                mx_c = mx_b
                mx_b = x
            elif x > mx_c:
                mx_c = x

            if x < mn_a:
                mn_b = mn_a
                mn_a = x
            elif x < mn_b:
                mn_b = x

        sol_a = mx_a * mx_b * mx_c
        sol_b = mn_a * mn_b * mx_a

        return max(sol_a, sol_b)
