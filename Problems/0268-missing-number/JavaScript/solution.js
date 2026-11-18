var missingNumber = function(a) { const n=a.length; return n*(n+1)/2-a.reduce((s,x)=>s+x,0); };
