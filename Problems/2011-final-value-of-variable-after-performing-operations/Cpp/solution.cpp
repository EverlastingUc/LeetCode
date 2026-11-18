#include <bits/stdc++.h>
using namespace std;

class Solution { public: int finalValueAfterOperations(vector<string>& a) { int x=0; for(auto& op:a)x+=(op[1]=='+'?1:-1); return x; } };
