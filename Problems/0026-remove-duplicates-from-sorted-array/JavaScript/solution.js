var removeDuplicates = function(a) { if(!a.length) return 0; let w=1; for(let r=1;r<a.length;r++) if(a[r]!==a[w-1]) a[w++]=a[r]; return w; };
