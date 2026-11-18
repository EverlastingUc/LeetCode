#include <bits/stdc++.h>
using namespace std;

class Solution { public: int lengthOfLastWord(string s) { int i=(int)s.size()-1; while(i>=0&&s[i]==' ') --i; int n=0; while(i>=0&&s[i]!=' '){++n;--i;} return n; } };
