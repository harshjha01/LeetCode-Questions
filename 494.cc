#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int countofsubsetsum(vector<int> arr, int sum)
    {
        int n = arr.size();
        int dp[n + 1][sum + 1];
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < sum + 1; j++)
            {
                if (i == 0)
                {
                    dp[i][j] = 0;
                }
                if (j == 0)
                {
                    dp[i][j] = 1;
                }
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < sum + 1; j++)
            {
                if (j < arr[i - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
                }
            }
        }
        return dp[n][sum];
    }
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int arrsum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            arrsum += nums[i];
        }
        int sum = arrsum + target / 2;
        return countofsubsetsum(nums, sum);
    }
};
int main()
{
 
    return 0;
}