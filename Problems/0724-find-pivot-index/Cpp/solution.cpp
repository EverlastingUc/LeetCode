#include <bits/stdc++.h>
using namespace std;

class Solution { public: int pivotIndex(vector<int>& a) { int total=accumulate(a.begin(),a.end(),0),left=0; for(int i=0;i<(int)a.size();++i){if(left==total-left-a[i])return i;left+=a[i];} return -1; } };
