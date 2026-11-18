class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        low=float('inf'); best=0
        for price in prices:
            low=min(low,price); best=max(best,price-low)
        return best
