var isSubsequence = function(s,t) { let i=0; for(const c of t)if(i<s.length&&s[i]===c)i++; return i===s.length; };
