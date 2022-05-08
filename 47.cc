#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {
// public:
//     vector<vector<int>> permuteUnique(vector<int> &nums)

//     {
//         unordered_set<int> s;
//         vector<int> in;
//         vector<int> op;
//         vector<vector<int>> sol;
//         set<vector<int>> ss;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             s.insert(nums[i]);
//         }
//         for (auto i : s)
//         {
//             in.push_back(i);
//         }
//         solve(in, op, sol);
//         return sol;
//     }
//     void solve(vector<int> in, vector<int> op, vector<vector<int>> &sol)
//     {
//         if (in.size() == 0)
//         {
//             sol.push_back(op);
//             return;
//         }
//         vector<int> op1 = op, op2 = op;
//         op1.push_back(in[0]);
//         in.erase(in.begin() + 0);
//         solve(in, op1, sol);
//         solve(in, op2, sol);
//         return;
//     }
// };
class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        vector<int> op;
        set<vector<int>> s;

        solve(nums, op, s);
        vector<vector<int>> sol;
        for (auto i : s)
        {
            sol.push_back(i);
        }
        return sol;
    }
    void solve(vector<int> in, vector<int> op, set<vector<int>> &s)
    {
        if (in.size() == 0)
        {
            s.insert(op);
            return;
        }
        vector<int> op1 = op, op2 = op;
        op1.push_back(in[0]);
        in.erase(in.begin() + 0);
        solve(in, op1, s);
        solve(in, op2, s);
        return;
    }
};
int main()
{
    Solution h;
    vector<int> s = {1, 1, 2};
    h.permuteUnique(s);

    return 0;
}