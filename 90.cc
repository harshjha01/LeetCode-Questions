#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    set<vector<int>> s;
    vector<vector<int>> sol;
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> op;
        solve(nums, op);
        return sol;
    }
    void solve(vector<int> in, vector<int> op)
    {
        if (in.size() == 0)
        {
            if (s.find(op) == s.end())
            {
                s.insert(op);
                sol.push_back(op);
            }
            return;
        }
        vector<int> op1 = op, op2 = op;
        op1.push_back(in[0]);
        in.erase(in.begin() + 0);
        solve(in, op1);
        solve(in, op2);
        return;
    }
};
int main()
{

    return 0;
}