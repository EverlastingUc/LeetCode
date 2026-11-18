import java.util.*;

class Solution { public int mostWordsFound(String[] a) { int best=0; for(String s:a)best=Math.max(best,s.split(" ").length); return best; } }
