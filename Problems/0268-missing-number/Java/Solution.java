import java.util.*;

class Solution { public int missingNumber(int[] a) { int n=a.length; long sum=(long)n*(n+1)/2; for(int x:a)sum-=x; return (int)sum; } }
