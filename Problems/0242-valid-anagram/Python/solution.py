class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        counts = {}
        for c in s: counts[c] = counts.get(c, 0) + 1
        for c in t:
            if counts.get(c, 0) == 0: return False
            counts[c] -= 1
        return True
