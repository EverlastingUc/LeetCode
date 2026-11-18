var plusOne = function(d) { for(let i=d.length-1;i>=0;i--){if(d[i]<9){d[i]++;return d;} d[i]=0;} d.unshift(1); return d; };
