#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        if (nums.size() < 2)
        {
            return -1;
        }

        int i = 0;
        int max = -1;
        int min = INT_MIN;
        for (i = 0; i < nums.size(); i++)
        {
            if (min >= nums[i])
            {
                min = nums[i];
                max = min;
            }
            if (max < nums[i])

            {
                max = nums[i];
            }
        }
        if (max == min)
        {
            return -1;
        }

        return max - min;
    }
};
int main()
{

    return 0;
}