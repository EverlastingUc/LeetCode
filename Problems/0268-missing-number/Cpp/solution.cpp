#include <bits/stdc++.h>
using namespace std;

class Solution { public: int missingNumber(vector<int>& a) { int n=a.size(); long long sum=1LL*n*(n+1)/2; for(int x:a)sum-=x; return (int)sum; } };
