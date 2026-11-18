var firstUniqChar = function(s) { const c=new Array(26).fill(0); for(const x of s)c[x.charCodeAt(0)-97]++; for(let i=0;i<s.length;i++)if(c[s.charCodeAt(i)-97]===1)return i; return -1; };
