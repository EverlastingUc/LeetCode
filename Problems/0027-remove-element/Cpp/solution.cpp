#include <bits/stdc++.h>
using namespace std;

class Solution { public: int removeElement(vector<int>& a, int val) { int w=0; for(int x:a) if(x!=val) a[w++]=x; return w; } };
