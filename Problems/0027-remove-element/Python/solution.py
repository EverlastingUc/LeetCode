class Solution:
    def removeElement(self, nums: list[int], val: int) -> int:
        w=0
        for x in nums:
            if x != val: nums[w]=x; w+=1
        return w
