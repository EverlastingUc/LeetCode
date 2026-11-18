import java.util.*;

class Solution { public int[] intersect(int[] a,int[] b) { Map<Integer,Integer> c=new HashMap<>(); for(int x:a)c.put(x,c.getOrDefault(x,0)+1); List<Integer> out=new ArrayList<>(); for(int x:b)if(c.getOrDefault(x,0)>0){out.add(x);c.put(x,c.get(x)-1);} return out.stream().mapToInt(i->i).toArray(); } }
