#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> v{{'I',1},{'V',5},{'X',10},{'L',50},
                                   {'C',100},{'D',500},{'M',1000}};
        int total = 0;
        for (int i = 0; i < (int)s.size(); ++i) {
            int cur = v[s[i]];
            if (i + 1 < (int)s.size() && cur < v[s[i + 1]]) total -= cur;
            else total += cur;
        }
        return total;
    }
};
