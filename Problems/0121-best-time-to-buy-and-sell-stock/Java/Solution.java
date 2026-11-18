import java.util.*;

class Solution { public int maxProfit(int[] p) { int low=Integer.MAX_VALUE,best=0; for(int x:p){low=Math.min(low,x);best=Math.max(best,x-low);} return best; } }
