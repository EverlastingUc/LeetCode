from typing import List
from collections import Counter
from bisect import bisect_right

class Solution:
    def gcdValues(self, nums: List[int], queries: List[int]) -> List[int]:
        mx = max(nums)
        cnt = Counter(nums)

        gcdCnt = [0] * (mx + 1)

        for i in range(mx, 0, -1):
            cur = 0

            for j in range(i, mx + 1, i):
                cur += cnt[j]
                gcdCnt[i] -= gcdCnt[j]

            if cur > 1:
                gcdCnt[i] += cur * (cur - 1) // 2

        pref = [0] * (mx + 1)
        for i in range(1, mx + 1):
            pref[i] = pref[i - 1] + gcdCnt[i]

        res = [0] * len(queries)
        for i in range(len(queries)):
            res[i] = bisect_right(pref, queries[i])

        return res
