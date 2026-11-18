class Solution:
    def firstUniqChar(self, s: str) -> int:
        counts = [0] * 26
        for c in s: counts[ord(c) - 97] += 1
        for i, c in enumerate(s):
            if counts[ord(c) - 97] == 1: return i
        return -1
