var intersect = function(a,b) { const c=new Map(); for(const x of a)c.set(x,(c.get(x)||0)+1); const out=[]; for(const x of b){if(c.get(x)>0){out.push(x);c.set(x,c.get(x)-1);}} return out; };
