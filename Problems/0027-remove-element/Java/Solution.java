import java.util.*;

class Solution { public int removeElement(int[] a, int val) { int w=0; for(int x:a) if(x!=val) a[w++]=x; return w; } }
