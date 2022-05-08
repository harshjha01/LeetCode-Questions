#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = n; i > 0; i--)
        {
            if (nums[i] + nums[i - 1] > nums[i + 1])
            {
                return nums[i - 1] + nums[i] + nums[i + 1];
            }
        }
        return 0;
    }
};
int main()
{

    return 0;
}