#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return false;
        }
        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < first)
            {
                first = nums[i];
            }
            else if (nums[i] < second)
            {
                second = nums[i];
            }
            else
            {
                return true;
            }
                }

        vector<int> leftmin;
        leftmin[0] = nums[0];
        vector<int> rightmax;
        rightmax[n - 1] = nums[n - 1];
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            minn = min(minn, nums[i]);
            leftmin.push_back(minn);
        }
        for (int i = n - 1; i >= 0; i--)
        {
            maxx = max(maxx, nums[i]);
            rightmax.push_back(maxx);
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > leftmin[i] && nums[i] < rightmax[i])
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{

    return 0;
}