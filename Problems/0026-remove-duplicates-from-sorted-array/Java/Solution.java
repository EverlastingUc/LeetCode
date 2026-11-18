import java.util.*;

class Solution { public int removeDuplicates(int[] a) { if(a.length==0) return 0; int w=1; for(int r=1;r<a.length;r++) if(a[r]!=a[w-1]) a[w++]=a[r]; return w; } }
