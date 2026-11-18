#include <bits/stdc++.h>
using namespace std;

class Solution { public: int maxProfit(vector<int>& p) { int low=INT_MAX,best=0; for(int x:p){low=min(low,x);best=max(best,x-low);} return best; } };
