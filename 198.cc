#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    // int helper(vector<int> nums, int sum, int j)
    // {
    //     if (j == nums.size() || nums.size() == 0)
    //     {
    //         return sum;
    //     }
    //     helper(nums, sum, j + 2);
    //     sum += nums[j];
    //     return helper(nums, sum, j + 2);
    // }
    // int rob(vector<int> &nums)
    // {
    //     return max(helper(nums, 0, 0), helper(nums, 0, 1));
    // }
    // int helper(vector<int> nums, int i)
    // {
    //     if (i == nums.size() || nums.size() == 0)
    //     {

    //         return 0;
    //     }
    //     return max(nums[i] + helper(nums, i + 1), helper(nums, i + 1));
    // }
    // void helper(vector<int> nums, int i, int sum, int prevsum)
    // {
    //     if (i == nums.size() || nums.size() == 0)
    //     {
    //         if (sum > prevsum)
    //         {

    //         }

    //         return;
    //     }
    // }
};
class Solution
{
public:
    int dp[100];
    int solve(vector<int> nums, int i)
    {
        if (i < 0)
        {
            return 0;
        }
        if (dp[i] != -1)
        {
            return dp[i];
        }
        return dp[i] = max(solve(nums, i - 2) + nums[i], solve(nums, i - 1));
    }
    void putminusone()
    {
        memset(dp, -1, sizeof(dp));
    }
    int rob(vector<int> &nums)
    {
        putminusone();
        return solve(nums, nums.size() - 1);
    }
};
int main()
{

    return 0;
}