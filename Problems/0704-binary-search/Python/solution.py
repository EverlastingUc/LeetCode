class Solution:
    def search(self, nums: list[int], target: int) -> int:
        l, r = 0, len(nums)
        while l < r:
            m = l + (r-l)//2
            if nums[m] < target: l = m+1
            else: r = m
        return l if l < len(nums) and nums[l] == target else -1
