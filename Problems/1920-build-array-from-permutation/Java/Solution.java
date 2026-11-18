import java.util.*;

class Solution { public int[] buildArray(int[] a) { int[] out=new int[a.length]; for(int i=0;i<a.length;i++)out[i]=a[a[i]]; return out; } }
