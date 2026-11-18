import java.util.*;

class Solution { public int finalValueAfterOperations(String[] a) { int x=0; for(String op:a)x+=op.charAt(1)=='+'?1:-1; return x; } }
