var lengthOfLastWord = function(s) { let i=s.length-1; while(i>=0&&s[i]===' ') i--; let n=0; while(i>=0&&s[i]!==' '){n++;i--;} return n; };
