import java.util.*;

class Solution { public void moveZeroes(int[] a) { int w=0; for(int x:a)if(x!=0)a[w++]=x; while(w<a.length)a[w++]=0; } }
