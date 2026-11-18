var moveZeroes = function(a) { let w=0; for(const x of a)if(x!==0)a[w++]=x; while(w<a.length)a[w++]=0; };
