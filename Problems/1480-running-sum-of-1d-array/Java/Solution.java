import java.util.*;

class Solution { public int[] runningSum(int[] a) { int[] out=new int[a.length]; int sum=0; for(int i=0;i<a.length;i++)out[i]=sum+=a[i]; return out; } }
