#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        int sol = INT_MAX;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int first = nums[i];
            int start = i + 1, end = nums.size() - 1;
            while (start > end)
            {
                if (first + nums[start] + nums[end] == target)
                {
                    return target;
                }
                sol = min(abs(first + nums[start] + nums[end] - target), sol);
                if (abs(first + nums[start] + nums[end] > target))
                {
                    end--;
                }
                else
                {
                    start++;
                }
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}