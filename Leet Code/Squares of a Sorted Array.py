class Solution:
    def sortedSquares(self, arr: List[int]) -> List[int]:
        if len(arr) == 1:
            return [arr[0] * arr[0]]

        first_non_neg_idx = 0

        l = 0
        r = len(arr) - 1

        while l < r:
            m = l + (r - l) // 2

            if arr[m] < 0:
                l = m + 1
            else:
                r = m

        if arr[m] < 0:
            m += 1

        first_non_neg_idx = m

        itp = first_non_neg_idx
        itn = first_non_neg_idx - 1

        n = len(arr)
        result = []
        while itp < n or itn > -1:
            pos = arr[itp] * arr[itp] if itp < n else math.inf
            neg = arr[itn] * arr[itn] if itn > -1 else math.inf

            if pos < neg:
                result.append(pos)
                itp += 1
            else:
                result.append(neg)
                itn -= 1

        return result

