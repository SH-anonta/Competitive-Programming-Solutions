class Solution:
    def longestCommonPrefix(self, strs):
        common_prefix = []
        n = min([len(s) for s in strs])
        terminate = False

        for i in range(n):
            comm_ch = None
            if terminate:
                break

            comm_ch = strs[0][i]
            for s in strs:
                if comm_ch != s[i]:
                    terminate = True
                    break

            if not terminate:
                common_prefix.append(comm_ch)

        return ''.join(common_prefix)
