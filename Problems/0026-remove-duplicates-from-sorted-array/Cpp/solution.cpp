#include <bits/stdc++.h>
using namespace std;

class Solution { public: int removeDuplicates(vector<int>& a) { if(a.empty()) return 0; int w=1; for(int r=1;r<(int)a.size();++r) if(a[r]!=a[w-1]) a[w++]=a[r]; return w; } };
