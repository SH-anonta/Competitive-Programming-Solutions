class Solution:
    def getRow(self, rowIndex):
        if rowIndex == 0:
            return [1]
        if rowIndex == 1:
            return [1, 1]

        prev_row = [1, 1]

        current_row = None
        for _ in range(2, rowIndex + 1):
            current_row = [1]
            for i in range(1, len(prev_row)):
                current_row.append(prev_row[i] + prev_row[i - 1])

            current_row.append(1)
            prev_row = current_row

        return current_row










