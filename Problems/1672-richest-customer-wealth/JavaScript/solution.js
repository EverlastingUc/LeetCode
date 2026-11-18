var maximumWealth = function(a) { let best=0; for(const row of a)best=Math.max(best,row.reduce((s,x)=>s+x,0)); return best; };
