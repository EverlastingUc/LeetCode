#include <bits/stdc++.h>
using namespace std;

class Solution { public: bool isAnagram(string s,string t) { if(s.size()!=t.size())return false; array<int,26> c{}; for(char x:s)++c[x-'a']; for(char x:t)if(--c[x-'a']<0)return false; return true; } };
