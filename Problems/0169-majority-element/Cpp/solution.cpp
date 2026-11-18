#include <bits/stdc++.h>
using namespace std;

class Solution { public: int majorityElement(vector<int>& a) { int c=0,n=0; for(int x:a){if(n==0)c=x; n+=(x==c?1:-1);} return c; } };
