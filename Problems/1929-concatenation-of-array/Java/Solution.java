import java.util.*;

class Solution { public int[] getConcatenation(int[] a) { int[] out=new int[a.length*2]; System.arraycopy(a,0,out,0,a.length); System.arraycopy(a,0,out,a.length,a.length); return out; } }
