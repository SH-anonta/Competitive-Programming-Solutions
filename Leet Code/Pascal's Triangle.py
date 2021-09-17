class Solution:
    def generate(self, numRows):
        if numRows == 1:
            return [[1]]

        pt = [[1], [1, 1]]

        i = 2
        while i < numRows:
            row = [1]
            prev_row = pt[i - 1]

            j = 1
            n = len(prev_row)
            while j < n:
                row.append(prev_row[j] + prev_row[j - 1])
                j += 1

            row.append(1)
            pt.append(row)

            i += 1

        return pt