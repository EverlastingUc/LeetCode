var maxProfit = function(p) { let low=Infinity,best=0; for(const x of p){low=Math.min(low,x);best=Math.max(best,x-low);} return best; };
