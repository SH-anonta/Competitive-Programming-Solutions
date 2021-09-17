class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sf = collections.defaultdict(lambda : 0)
        tf = collections.defaultdict(lambda : 0)
        
        for ch in s:
            sf[ch] += 1
            
        for ch in t:
            tf[ch] += 1
            
            
        return sf == tf