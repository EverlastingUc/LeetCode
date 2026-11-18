#include <bits/stdc++.h>
using namespace std;

class Solution { public: void moveZeroes(vector<int>& a) { int w=0; for(int x:a)if(x!=0)a[w++]=x; while(w<(int)a.size())a[w++]=0; } };
