#include <bits/stdc++.h>
using namespace std;

class Solution { public: int searchInsert(vector<int>& a,int t) { int l=0,r=a.size(); while(l<r){int m=l+(r-l)/2; if(a[m]<t) l=m+1; else r=m;} return l; } };
