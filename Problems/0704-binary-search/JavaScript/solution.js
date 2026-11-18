var search = function(a,t) { let l=0,r=a.length; while(l<r){const m=l+Math.floor((r-l)/2); if(a[m]<t)l=m+1;else r=m;} return l<a.length&&a[l]===t?l:-1; };
