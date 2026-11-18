#include <bits/stdc++.h>
using namespace std;

class Solution { public: vector<int> getConcatenation(vector<int>& a) { vector<int> out=a; out.insert(out.end(),a.begin(),a.end()); return out; } };
