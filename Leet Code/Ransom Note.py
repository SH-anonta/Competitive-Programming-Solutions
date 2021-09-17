class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        rf = collections.defaultdict(lambda : 0)
        mf = collections.defaultdict(lambda : 0)
        
        for ch in ransomNote:
            rf[ch] += 1
            
        for ch in magazine:
            mf[ch] += 1
            
        
        for k, v in rf.items():
            if v > mf[k]:
                return False
            
        return True