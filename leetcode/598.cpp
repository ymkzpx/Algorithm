#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int mina = m, minb = n;
        for (int i = 0; i < int(ops.size()); i++) {
            mina = min(mina, ops[i][0]);
            minb = min(minb, ops[i][2]);
        }
        return  mina * minb;
    }
};