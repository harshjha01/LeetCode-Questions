#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        if (nums.size() < 2)
        {
            return 0;
        }

        int maxiii = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] <= nums[j])
                {
                    maxiii = max(maxiii, j - i);
                }
            }
        }
        return maxiii;
    }
};
class Solution
{
public:
    int maxWidthRamp(vector<int> &nums)
    {
        int sol = 0;
        stack<int> s;
        s.push(0);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[s.top()] > nums[i])
            {
                s.push(i);
            }
        }
        for (int i = nums.size(); i >= 0; i--)
        {
            while (!s.empty() && nums[s.top()] <= nums[i])
            {
                sol = max(sol, i - s.top());
                s.pop();
            }
        }
        return sol;
    }
};
int main()
{

    return 0;
}