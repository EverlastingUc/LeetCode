import java.util.*;

class Solution { public int singleNumber(int[] a) { int x=0; for(int n:a)x^=n; return x; } }
