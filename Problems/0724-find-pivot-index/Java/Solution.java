import java.util.*;

class Solution { public int pivotIndex(int[] a) { int total=0,left=0; for(int x:a)total+=x; for(int i=0;i<a.length;i++){if(left==total-left-a[i])return i;left+=a[i];} return -1; } }
