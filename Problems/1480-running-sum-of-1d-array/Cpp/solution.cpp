#include <bits/stdc++.h>
using namespace std;

class Solution { public: vector<int> runningSum(vector<int>& a) { vector<int> out; int sum=0; for(int x:a){sum+=x;out.push_back(sum);} return out; } };
