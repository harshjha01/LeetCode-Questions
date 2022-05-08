#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        if (nums.size() < 2)
        {
            return 0;
        }
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        for (int i = nums.size(); i > 0; i--)
        {
            if (nums[i] - nums[i - 1] > maxi)
            {
                maxi = nums[i] - nums[i - 1];
            }
        }
        return maxi;
        for (int i = 0; i < nums.size(); i++)
        {
            if (abs(nums[i] - nums[i + 1]) > maxi)
            {
                maxi = abs(nums[i] - nums[i + 1]);
            }
        }
    };
    int main()
    {

        return 0;
    }