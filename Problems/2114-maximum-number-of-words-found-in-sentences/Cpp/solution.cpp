#include <bits/stdc++.h>
using namespace std;

class Solution { public: int mostWordsFound(vector<string>& a) { int best=0; for(auto& s:a)best=max(best,1+(int)count(s.begin(),s.end(),' ')); return best; } };
