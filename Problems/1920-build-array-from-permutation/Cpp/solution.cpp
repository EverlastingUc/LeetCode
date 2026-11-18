#include <bits/stdc++.h>
using namespace std;

class Solution { public: vector<int> buildArray(vector<int>& a) { vector<int> out; for(int x:a)out.push_back(a[x]); return out; } };
