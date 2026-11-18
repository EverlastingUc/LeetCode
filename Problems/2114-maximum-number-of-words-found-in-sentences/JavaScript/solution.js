var mostWordsFound = function(a) { let best=0; for(const s of a)best=Math.max(best,s.split(' ').length); return best; };
