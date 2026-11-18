class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        total = 0
        out = []
        for x in nums:
            total += x
            out.append(total)
        return out
