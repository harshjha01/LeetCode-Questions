#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
        {
            return nums[0];
        }

        sort(nums.begin(), nums.end());
        if (nums[0] != nums[1])
        {
            return nums[0];
        }
        if (nums[n - 1] != nums[n - 2])
        {
            return nums[n - 1];
        }
        int i = 1;
        while (i < n)

        {
            if (nums[i] != nums[i - 1])
            {
                return nums[i - 1];
            }
            i++;
            i++;
            i++;
        }
        return 0;

        // unordered_map<int, int> hh;
        // for (auto i : nums)
        // {
        //     hh[i]++;
        // }
        // for (auto j : hh)
        // {
        //     if (j.second==1)
        //     {
        //        return j.second;
        //     }

        // }
        // return;
    }
};
int main()
{

    return 0;
}