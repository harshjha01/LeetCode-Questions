#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    void helper(vector<vector<int>> &sol, vector<int> in, vector<int> op, int i, int n)
    {
        if (i == n)
        {
            sol.push_back(op);
            return;
        }
        helper(sol, in, op, i + 1, n);
        op.push_back(in[i]);
        helper(sol, in, op, i + 1, n);
        op.pop_back();
    }
    bool hasAllCodes(string s, int k)
    {
    }
};
int main()
{

    return 0;
}