var finalValueAfterOperations = function(a) { let x=0; for(const op of a)x+=op[1]==='+'?1:-1; return x; };
