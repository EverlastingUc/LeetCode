var pivotIndex = function(a) { const total=a.reduce((s,x)=>s+x,0); let left=0; for(let i=0;i<a.length;i++){if(left===total-left-a[i])return i;left+=a[i];} return -1; };
