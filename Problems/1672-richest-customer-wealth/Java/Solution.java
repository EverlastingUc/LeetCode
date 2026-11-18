import java.util.*;

class Solution { public int maximumWealth(int[][] a) { int best=0; for(int[] row:a){int sum=0;for(int x:row)sum+=x;best=Math.max(best,sum);} return best; } }
