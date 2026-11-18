var majorityElement = function(a) { let c=0,n=0; for(const x of a){if(n===0)c=x; n+=x===c?1:-1;} return c; };
