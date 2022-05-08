#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// class Solution
// {

// public:
//     void solve(vector<int> in, vector<int> opp, vector<vector<int>> &soll)
// {
//     if (in.size() == 0)
//     {
//         soll.push_back(opp);
//         return;
//     }
//     vector<int> opp1 = opp;
//     vector<int> opp2 = opp;
//     opp1.push_back(in[0]);
//     in.erase(in.begin() + 0);
//     solve(in, opp1, soll);
//     solve(in, opp2, soll);
//     return;
// }
//     vector<vector<int>> subsets(vector<int> &nums)
//     {
//         vector<vector<int>> soll;
//         vector<int> op;
//         solve(nums, op, soll);
//         return soll;
//     }
// };

class Solution
{

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> sett;
        vector<int> curr;
        solve(0, nums, curr, sett, nums.size());
    }
    void solve(int i, vector<int> in, vector<int> &op, vector<vector<int>> &ss, int n)
    {
        if (i == n)
        {
            ss.push_back(op);
            return;
        }
        solve(i + 1, in, op, ss, n);
        op.push_back(in[i]);
        solve(i + 1, in, op, ss, n);
        op.pop_back();
    }
};
int main()
{

    return 0;
}