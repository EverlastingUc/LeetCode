import java.util.*;

class Solution { public int lengthOfLastWord(String s) { int i=s.length()-1; while(i>=0&&s.charAt(i)==' ') i--; int n=0; while(i>=0&&s.charAt(i)!=' '){n++;i--;} return n; } }
