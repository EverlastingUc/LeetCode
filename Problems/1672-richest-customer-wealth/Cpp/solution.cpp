#include <bits/stdc++.h>
using namespace std;

class Solution { public: int maximumWealth(vector<vector<int>>& a) { int best=0; for(auto& row:a)best=max(best,accumulate(row.begin(),row.end(),0)); return best; } };
